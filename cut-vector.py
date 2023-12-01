def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = total_sum - left_sum
        if left_sum == right_sum or abs(left_sum - right_sum) == 1:
            return vector[: i + 1], vector[i + 1 :]
    return vector, [0]