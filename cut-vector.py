def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = total_sum
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
        left_sum -= vector[i]

    return vector[:split_index+1], vector[split_index+1:]