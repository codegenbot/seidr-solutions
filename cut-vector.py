def cut_vector(vector):
    min_diff = float("inf")
    split_idx = -1
    left_sum = 0
    right_sum = sum(vector)

    for i in range(len(vector)):
        right_sum -= vector[i]
        if left_sum == right_sum:
            return [vector[: i + 1], vector[i:]]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_idx = i

    return [vector[: split_idx + 1], vector[split_idx + 1 :]]