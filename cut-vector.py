def cut_vector(vector):
    if len(vector) == 1:
        return vector[0], []
    min_diff = float("inf")
    split_index = -1
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[: split_index + 1], vector[split_index:]