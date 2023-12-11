def fuel_cost(nums):
    return sum(int((n - 2) / 3) for n in nums)