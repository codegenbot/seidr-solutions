def cut_vector(vector):
    total_sum = sum(vector)
    for i in range(len(vector)):
        current_sum = 0
        for j in range(i):
            current_sum += vector[j]
        if current_sum * 2 == total_sum or current_sum * 2 + vector[i] == total_sum:
            return vector[:i+1], vector[i+1:]
    return vector, []