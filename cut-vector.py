def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0
    right_sum = total_sum
    min_difference = float("inf")

    for i in range(len(vector)):
        left_sum += vector[i]
        right_sum -= vector[i]
        difference = abs(left_sum - right_sum)
        if difference <= min_difference:
            min_difference = difference
            split_index = i

    subvector1 = vector[: split_index + 1]
    subvector2 = vector[split_index + 1 :]

    return subvector1, subvector2