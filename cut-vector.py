def cut_vector(vector):
    min_diff = float("inf")
    split_point = 0
    left_sum = sum(vector[:split_point])
    right_sum = sum(vector[split_point:])

    for i in range(1, len(vector)):
        new_left_sum = sum(vector[:i])
        new_right_sum = sum(vector[i:])

        diff = abs(new_left_sum - new_right_sum)
        if diff < min_diff:
            min_diff = diff
            split_point = i

    return vector[: split_point + 1], vector[split_point:]