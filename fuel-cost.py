def fuel_cost(nums):
    return sum([int((x / 3) - 2) for x in nums])