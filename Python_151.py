def double_the_difference(nums):
    n = len(nums)
    result = sum(i**2 for i in nums if isinstance(i, int) and i > 0)
    return min(result * 2 - 1, abs(n - 1))