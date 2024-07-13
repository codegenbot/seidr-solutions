Here is the solution in Python:

def leaders(input_vector):
    return [i for i in reversed(input_vector) if all(i >= j for j in input_vector[input_vector.index(i)+1:])]