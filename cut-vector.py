def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    left_sum = sum(vector)

    for i in range(1, len(vector)):
        right_sum = sum(vector[:i])

        diff = abs(left_sum - 2*right_sum)

        if (left_sum == 2*right_sum or diff < min_diff):
            min_diff = diff
            split_index = i

        left_sum -= vector[i]

    return vector[:split_index], vector[split_index:], min_diff