def fuel_cost(nums):
    return sum((n - 2) // 3 for n in nums)