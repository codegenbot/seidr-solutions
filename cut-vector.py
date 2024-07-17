def cut_vector(vector):
    if len(vector) <= 1:
        return [vector], []

    min_diff = float("inf")
    left, right = [], []

    for i in range(1, len(vector)):
        diff = abs(np.mean(vector[:i]) - np.mean(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            left, right = vector[:i], vector[i:]

    return [left], [right]