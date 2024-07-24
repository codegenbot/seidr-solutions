def cut_vector(vector):
    min_diff = float("inf")
    cut_idx = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return (vector[:i], vector[i:])

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_idx = i

    return (vector[: cut_idx + 1], vector[cut_idx + 1 :])