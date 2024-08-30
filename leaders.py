```
def leaders(input_vector):
    return [max(input_vector[i:]) for i in range(len(input_vector) - 1, -1, -1)]