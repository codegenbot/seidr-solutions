def cut_vector(vector):
    total = sum(vector)
    left_sum = 0
    min_diff = float('inf')
    for i in range(len(vector)):
        right_sum = total - left_sum
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i
        left_sum += vector[i]
    return [vector[:split_index+1], vector[split_index:]]