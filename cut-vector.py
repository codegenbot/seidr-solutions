def cut_vector(v):
    min_diff = float("inf")
    cut_index = 0
    for i in range(1, len(v)):
        diff = abs(np.mean(v[:i]) - np.mean(v[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    return v[:cut_index], v[cut_index:]