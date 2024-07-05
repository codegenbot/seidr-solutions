def leaders(input_vector):
    return [x for i, x in reversed(list(enumerate(input_vector))) if not any(x < y for y in input_vector[i + 1:])]