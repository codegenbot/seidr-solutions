def fuel_cost(nums):
    return sum((num // 3) - 2 for num in nums)