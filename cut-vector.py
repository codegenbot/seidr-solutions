def cut_vector(vector):
    min_diff = float("inf")
    split_idx = 0
    left_sum = 0

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum = sum(vector[i + 1 :])

        if left_sum == right_sum:
            return [vector[: i + 1], vector[i:]]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_idx = i

    return [vector[: split_idx + 1], vector[split_idx:]]