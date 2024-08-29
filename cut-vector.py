def cut_vector(vector):
    total_sum = sum(vector)
    half_sum = total_sum / 2
    left_sum = 0
    for i in range(len(vector)):
        left_sum += vector[i]
        if left_sum > half_sum:
            return vector[:i+1], vector[i:]