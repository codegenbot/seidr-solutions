Here is the Python code for the problem:

def fuel_cost(input_vector):
    return sum((i // 3) - 2 for i in input_vector)