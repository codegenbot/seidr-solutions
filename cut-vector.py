def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    min_index = -1
    for i in range(len(vector)):
        right_sum = sum(vector[i + 1 :])
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            min_index = i
        left_sum += vector[i]
    return vector[:min_index], vector[min_index:]