def leaders(input_vector):
    return [
        x
        for i, x in reversed(list(enumerate(input_vector)))
        if all(y < x for j, y in enumerate(input_vector) if i < j)
    ]