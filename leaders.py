def leaders(input_vector):
    return [
        x
        for i, x in enumerate(reversed(input_vector))
        if all(x >= y for j, y in enumerate(input_vector[i + 1 :]))
    ]