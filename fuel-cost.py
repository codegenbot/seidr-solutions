def fuel_cost(nums):
    return sum(int(num/3 - 2) for num in nums)