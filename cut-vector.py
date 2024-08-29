def cut_vector(v):
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(v)):
        diff = abs(np.mean(v[:i]) - np.mean(v[i:]))
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return v[:split_index], v[split_index:]