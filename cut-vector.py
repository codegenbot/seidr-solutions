def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    left_sum = sum(vector[:])

    for i in range(len(vector) - 1):
        right_sum = left_sum - vector[i]
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return [vector[: split_index + 1], vector[split_index:]]