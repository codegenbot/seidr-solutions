Here is the Python solution for the problem:

def leaders(input_vector):
    return [x for x in reversed(input_vector) if all(x >= y for y in input_vector[input_vector.index(x)+1:])]