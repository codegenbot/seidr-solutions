def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [vector]

    left_sum = right_sum = sum(vector)
    left_min_diff = float("inf")
    split_index = -1
    for i in range(1, len(vector)):
        left_sum -= vector[i - 1]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        if diff < left_min_diff:
            left_min_diff = diff
            split_index = i

    return [vector[:split_index]], [vector[split_index:]]