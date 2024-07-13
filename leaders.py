def leaders(input_vector):
    return [x for i, x in reversed(list(enumerate(input_vector))) if not any(y >= x for j, y in enumerate(input_vector) if j > i)]