
def double_the_difference(nums):
    small = min(nums)
    large = max(nums)
    diff = large - small
    return 2 * diff

check(double_the_difference(nums))