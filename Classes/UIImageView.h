//  Created by Sean Heber on 5/27/10.
#import "UIView.h"

@class UIImage;

@interface UIImageView : UIView {
@private
	UIImage *_image;
	NSArray *_animationImages;
	NSTimeInterval _animationDuration;
	UIImage *_highlightedImage;
	BOOL _highlighted;
}

- (id)initWithImage:(UIImage *)theImage;
- (void)startAnimating;
- (void)stopAnimating;

@property (nonatomic, retain) UIImage *highlightedImage;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSArray *animationImages;
@property (nonatomic) NSTimeInterval animationDuration;

@end
