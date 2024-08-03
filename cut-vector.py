def cut_vector(vector):
    min_diff = float("inf")
    cut_idx = -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_idx = i
    if cut_idx == -1:
        return [vector], []
    else:
        return vector[: cut_idx + 1], vector[cut_idx:]