def double_the_difference(nums):
    small = min(nums)
    large = max(nums)
    diff = large - small
    return 2 * diff


nums = [1, 2, 3, 4]
result = double_the_difference(nums)
print(result)