def double_the_difference(nums):
    return sum(x**2 for x in nums if x % 2 == 1 and x > 0)