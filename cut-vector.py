def cut_vector(input_vector):
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(input_vector)):
        left_sum = sum(input_vector[:i])
        right_sum = sum(input_vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return input_vector[:split_index], input_vector[split_index:]