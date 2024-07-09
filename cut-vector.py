def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float('inf')
    split_index = None
    for i in range(len(vector) + 1):  
        left_sum = sum(vector[:i])
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return [vector[:split_index], vector[split_index:]]