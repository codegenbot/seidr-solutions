def leaders(input_vector):
    return [
        i
        for i in reversed(input_vector)
        if all(j <= i for j in input_vector[input_vector.index(i) + 1 :])
    ]