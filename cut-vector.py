def cut_vector(vector):
    left_sum = 0
    for i, x in enumerate(vector):
        left_sum += x
        if left_sum >= sum(vector) // 2:
            return [vector[:i+1], vector[i:]]
    return [vector, []]