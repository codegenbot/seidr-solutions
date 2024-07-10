def cut_vector(vector):
    left_sum = 0
    right_sum = sum(vector[1:])
    min_diff = abs(left_sum - right_sum)
    split_index = 0

    for i in range(len(vector) - 1):
        left_sum += vector[i]
        right_sum -= vector[i + 1]

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return vector[: split_index + 1], vector[split_index + 1 :]