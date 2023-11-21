def cut_vector(vector):
    total_sum = sum(vector)
    for i in range(len(vector)):
        current_sum = 0
        for j in range(i+1):
            current_sum += vector[j]
        if current_sum == total_sum/2 or i == len(vector) - 1:
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]