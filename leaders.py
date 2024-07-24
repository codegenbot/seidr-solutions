Here is the solution to the problem:

def leaders(input_vector):
    leaders_vector = [x for x in reversed(input_vector) if all(x >= y for y in input_vector[input_vector.index(x)+1:])]
    return list(reversed(leaders_vector))