def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(x for x in vector[:i] if x > 0)
        right_sum = sum(x for x in vector[i:] if x > 0)
        diff = abs(left_sum - right_sum)
        if diff < min_diff and (left_sum > 0 or right_sum > 0):
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]