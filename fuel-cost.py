def fuel_cost(nums):
    return sum([max(0, num // 3 - 2) for num in nums])