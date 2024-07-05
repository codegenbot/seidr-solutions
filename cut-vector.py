def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    for i in range(len(vector) - 1):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i+1:])

        diff = abs(left_sum - right_sum)

        if (left_sum == right_sum or diff < min_diff):
            min_diff = diff
            split_index = i

    return vector[:split_index+1], vector[split_index+1:], min_diff