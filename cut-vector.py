def cut_vector(vector):
    min_diff = abs(sum(vector) - sum([vector[0]] + vector[1:]))
    split_index = 1
    for i in range(2, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]