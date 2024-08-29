Here is the Python solution:

def fuel_cost(vector):
    return sum((i//3)-2 for i in vector)