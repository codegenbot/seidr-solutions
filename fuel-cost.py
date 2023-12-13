import math

def fuel_cost(nums):
    if not nums:
        return 0
    return sum([math.floor(num/3)-2 for num in nums])