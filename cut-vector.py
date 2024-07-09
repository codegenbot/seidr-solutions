def cut_vector(vector):
    min_diff = abs(sum(vector[1:]) - vector[0])
    split_index = 1
    for i in range(2, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]