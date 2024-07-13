Here is the Python solution for the given problem:

def fuel_cost(arr):
    return sum((i//3)-2 for i in arr)