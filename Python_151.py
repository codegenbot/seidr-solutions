```
def double_the_difference(nums):
    return sum(i**2 for i in nums if isinstance(i, int) and i % 2 != 0)