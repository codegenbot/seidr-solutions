def cut_vector(vector):
    min_diff = float("inf")
    cut_idx = 0

    for i in range(1, len(vector)):
        diff = abs(np.mean(vector[:i]) - np.mean(vector[i:]))

        if diff < min_diff:
            min_diff = diff
            cut_idx = i

    return vector[:cut_idx], vector[cut_idx:]