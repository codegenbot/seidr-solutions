Here is the completed code:

def fuel_cost(nums):
    return sum((n//3 - 2) for n in nums)