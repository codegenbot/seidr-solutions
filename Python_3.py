def below_zero(nums):
    count = sum(1 for num in nums if num < 0)
    return count