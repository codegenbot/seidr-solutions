def cut_vector(v):
    min_diff = float("inf")
    cut_idx = 0

    for i in range(1, len(v)):
        diff = abs(sum(v[:i]) - sum(v[i:]))

        if diff < min_diff:
            min_diff = diff
            cut_idx = i

    return v[:cut_idx], v[cut_idx:]