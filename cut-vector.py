def cut_vector(vector):
    total_diff = float("inf")
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < total_diff:
            total_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]