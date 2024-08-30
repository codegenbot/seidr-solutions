def cut_vector(vector):
    if len(vector) == 1:
        return [vector], [vector[0]]
    min_diff = float("inf")
    best_split = -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            best_split = i
    return vector[: best_split + 1], vector[best_split:]