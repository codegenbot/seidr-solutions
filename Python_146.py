def specialFilter(nums):
    return sum(1 for num in nums if abs(num) > 10 and str(abs(num))[-1] % 2 != 0 and str(abs(num))[0] % 2 != 0)