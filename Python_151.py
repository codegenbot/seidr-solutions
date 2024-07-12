def double_the_difference(nums):
    odd_sum = sum(i for i in nums if isinstance(i, int) and i % 2 != 0)
    return sum(
        i**2 for i in filter(lambda x: isinstance(x, int) and x > 0, nums)
    ) * 2 - abs(odd_sum)