def cut_vector(vector):
    min_diff = float('inf')
    split_index = 0
    if len(vector) > 1:
        for i in range(1, len(vector)):
            diff = abs(sum(vector[:i]) - sum(vector[i:]))
            if diff < min_diff:
                min_diff = diff
                split_index = i
    return [vector[:split_index], vector[split_index:]]