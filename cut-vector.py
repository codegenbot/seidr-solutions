def cut_vector(vector):
    if not vector:
        return [], []
    left_sum = sum(vector[:1])
    right_sum = sum(vector[1:])
    min_diff = abs(left_sum - right_sum)
    split_index = 0
    for i in range(1, len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]
        diff = abs(left_sum - right_sum)
        if diff <= min_diff:
            min_diff = diff
            split_index = i
    return vector[: split_index + 1], vector[split_index + 1 :]