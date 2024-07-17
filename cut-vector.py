def cut_vector(vector):
    left_sum = sum(vector[:i]) for i in range(len(vector))
    min_diff = float('inf')
    split_index = 0
    for i in range(1, len(vector)):
        current_diff = abs(left_sum[i-1] - sum(vector[i:]))
        if current_diff < min_diff:
            min_diff = current_diff
            split_index = i
    return vector[:split_index], vector[split_index:]