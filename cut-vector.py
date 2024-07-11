def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    cut_index = 0

    for i in range(1, n):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index:]