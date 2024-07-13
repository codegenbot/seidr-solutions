def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float('inf')
    left_sum = sum(vector)
    for i in range(len(vector)):
        right_sum = left_sum - vector[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
        left_sum = right_sum + vector[i]
    return [vector[:split_index], vector[split_index:]]