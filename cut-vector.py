def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    left_sum = vector[0]
    right_sum = sum(vector[1:])
    diff = abs(left_sum - right_sum)

    for i in range(1, len(vector)):
        left_sum += vector[i - 1]
        right_sum -= vector[i - 1]
        new_diff = abs(left_sum - right_sum)

        if new_diff < min_diff or (new_diff == 0 and diff > 0):
            min_diff = new_diff
            split_index = i

    return vector[:split_index], vector[split_index:]