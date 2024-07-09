def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = 0
        right_sum = 0
        for j in range(i):
            left_sum += vector[j]
        for k in range(i, len(vector)):
            right_sum += vector[k]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]