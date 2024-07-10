def cut_vector(vector):
    min_diff = float("inf")
    cut_idx = 0
    for i in range(1, len(vector)):
        if vector[i] == vector[0]:
            return [vector[:i], vector[i:]]
        diff = abs(np.sum(vector[:i]) - np.sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_idx = i
    return [vector[: cut_idx + 1], vector[cut_idx + 1 :]]