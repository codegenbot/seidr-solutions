def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    for i in range(1, len(vector) - 1):
        current_sum += vector[i-1]
        total_sum -= vector[i-1]
        if current_sum * 2 == total_sum:
            return vector[:i+1], vector[i+1:]
    return vector[:-1], [vector[-1]]