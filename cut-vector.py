def cut_vector(vector):
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return (vector[:i], vector[i:])
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_idx = i

    return (vector[:split_idx], vector[split_idx:])