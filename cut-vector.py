def cut_vector(vector):
    left_sum = 0
    min_diff = float('inf')
    split_index = 0
    for i, num in enumerate(vector):
        left_sum += num
        right_sum = sum(vector[i+1:])
        if abs(left_sum - right_sum) <= min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
    return [vector[:split_index], vector[split_index:]]