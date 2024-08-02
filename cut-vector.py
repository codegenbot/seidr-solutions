def cut_vector(v):
    v = sorted(v)
    min_diff = float("inf")
    split_index = 0

    for i in range(len(v) - 1):
        diff = abs((v[i] + v[i + 1]) / 2 - v[i])
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return v[: split_index + 1], v[split_index:]