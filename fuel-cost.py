Here is the Python solution for the problem:

def fuel_cost(vector):
    return sum((num // 3 - 2) for num in vector)