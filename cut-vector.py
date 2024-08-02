def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    split_idx = -1
    for i in range(1, n):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            split_idx = i
    return vector[: split_idx + 1], vector[split_idx:]