def cut_vector(vector):
    total_sum = sum(vector)
    half_sum = total_sum // 2

    for i in range(1, len(vector)):
        if vector[i] > half_sum:
            return vector[:i], vector[i:]

    return [vector[0]], vector[1:]