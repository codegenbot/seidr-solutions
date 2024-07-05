def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0

    min_diff = 0
    split_index = 0

    for i in range(len(vector)):
        right_sum = total_sum - left_sum

        if abs(left_sum - ((total_sum - left_sum) / 2)) < min_diff:
            min_diff = abs(left_sum - ((total_sum - left_sum) / 2))
            split_index = i

        left_sum += vector[i]

    return str(vector[:split_index]), str(vector[split_index:])