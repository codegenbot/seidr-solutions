def fuel_cost(nums):
    return sum((max(num // 3 - 2, 0)) for num in nums)