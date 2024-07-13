def leaders(input_vector):
    return [
        x
        for x in input_vector
        if all(y < x for y in input_vector[input_vector.index(x) + 1 :])
    ]