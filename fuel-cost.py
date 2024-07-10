Here is the solution:

def fuel_cost(nums):
    return sum((n // 3) - 2 for n in nums)