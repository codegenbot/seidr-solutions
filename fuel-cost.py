Here is a Python function that solves the problem:

def fuel_cost(vector):
    return sum((i//3 - 2) for i in vector)