def cut_vector(vector):
    if len(vector) == 1:
        return [vector], []
    min_diff = float("inf")
    split_index = -1
    for i in range(len(vector) - 1):
        diff = abs(sum(vector[: i + 1]) - sum(vector[i + 1 :]))
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[: split_index + 1], vector[split_index + 1 :]