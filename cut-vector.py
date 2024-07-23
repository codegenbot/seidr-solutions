def cut_vector(vector):
    if len(vector) == 1:
        return [vector], []

    left = right = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff or (diff == 0 and i > left):
            min_diff = diff
            split_index = i
            left = right = i // 2

    return [vector[: split_index + 1]], [vector[split_index + 1 :]]