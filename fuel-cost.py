Here is the Python solution for the given problem:

def fuel_cost(input_vector):
    return sum((i // 3 - 2) for i in input_vector if i > 0)