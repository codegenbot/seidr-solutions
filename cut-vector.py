def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        right_sum = sum(vector[i + 1 :])
        diff = abs(left_sum - right_sum)

        if (left_sum == right_sum) or (diff < min_diff):
            min_diff = diff
            split_index = i

        left_sum += vector[i]

    return [vector[: split_index + 1], vector[split_index + 1 :]]