def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(1, len(vector)):
        right_sum = sum(vector[:i])
        left_sum = sum(vector[i:])

        diff = abs(right_sum - left_sum)

        if diff == 0 or diff < min_diff:
            min_diff = diff
            split_index = i

    return vector[:split_index], vector[split_index:]