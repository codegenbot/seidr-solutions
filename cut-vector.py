def cut_vector(vector):
    total = sum(vector)
    min_diff = float('inf')
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = total - left_sum
        if abs(left_sum - right_sum) <= min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
    return [vector[:split_index+1], vector[split_index:]]