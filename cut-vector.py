def cut_vector(vector):
    total = sum(vector)
    cut_index = total // 2
    if total % 2 != 0:
        return [vector, []]
    left_sum = 0
    for i in range(len(vector)):
        left_sum += vector[i]
        if left_sum > cut_index:
            return [vector[:i], vector[i:]]