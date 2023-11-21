def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i in range(len(vector)):
        current_sum += vector[i]
        if current_sum == total_sum - current_sum or i == len(vector) - 1:
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]