def cut_vector(vector):
    min_diff = float("inf")
    split_idx = 0
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            split_idx = i
    return vector[:split_idx], vector[split_idx:]