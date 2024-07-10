Here is the Python solution for the problem:

def fuel_cost(v):
    return sum((i//3)-2 for i in v)