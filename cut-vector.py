def cut_vector(vector):
    min_diff = float("inf")
    split_index = -1
    left_sum = sum(vector[:])
    right_sum = sum(vector[1:])

    for i in range(len(vector) - 1):
        left_sum -= vector[i]
        right_sum += vector[i]
        diff = abs(left_sum - right_sum)

        if diff <= min_diff:
            min_diff = diff
            split_index = i

    return vector[: split_index + 1], vector[split_index + 1 :]