def cut_vector(vector):
    if len(vector) == 0:
        return [], []

    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_idx = i

    return vector[:split_idx], vector[split_idx:]