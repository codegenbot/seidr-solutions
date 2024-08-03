Here is the Python solution for the problem:

def fuel_cost(nums):
    return sum((n//3)-2 for n in nums)