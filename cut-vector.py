def cut_vector(vector):
    total_sum = sum(vector)
    current_sum = 0
    current_diff = float('inf')
    for i in range(len(vector)):
        current_sum += vector[i]
        diff = abs(2 * current_sum - total_sum)
        if diff <= current_diff:
            current_diff = diff
            split_index = i
    return vector[:split_index+1], vector[split_index+1:]