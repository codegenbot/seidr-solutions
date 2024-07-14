Here is a Python function that solves the problem:

def fuel_cost(arr):
    return sum((i//3)-2 for i in arr)