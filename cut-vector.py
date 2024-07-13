def cut_vector(vector):
    cut_index = sum(vector) // 2
    left_sum = 0
    for i in range(len(vector)):
        left_sum += vector[i]
        if left_sum == cut_index:
            return [vector[:i+1], vector[i:]]
    return [vector, []]