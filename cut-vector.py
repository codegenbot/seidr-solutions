def cut_vector(vector):
    total_sum = sum(vector)
    min_diff = float('inf')
    for i in range(len(vector)):
        left_sum = total_sum - sum(vector[i:])
        if abs(left_sum) < min_diff:
            min_diff = abs(left_sum)
            split_index = i
    return [vector[:split_index], vector[split_index:]]