Here is the Python solution:

def fuel_cost(v):
    return sum((x//3)-2 for x in v)