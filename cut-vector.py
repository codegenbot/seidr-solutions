def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        right_sum = sum(vector[i + 1 :])

        if left_sum == right_sum:
            return [vector[: i + 1], vector[i:]]

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

    if split_index != -1:
        return [vector[: split_index + 1], vector[split_index:]]
    else:
        return [vector, []]