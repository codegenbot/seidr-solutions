def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [0]

    left = []
    right = []
    min_diff = float("inf")
    split_index = -1

    for i in range(1, len(vector)):
        diff = abs(np.sum(vector[:i]) - np.sum(vector[i:]))

        if diff < min_diff:
            min_diff = diff
            split_index = i

    left = vector[:split_index]
    right = vector[split_index:]

    return [left], [right, 0]