def cut_vector(lst):
    if len(lst) == 1 or lst[0] == 0:
        return [lst], []
    min_diff = float("inf")
    left_cut = right_cut = 0
    for i in range(1, len(lst)):
        diff = np.abs(np.mean(lst[:i]) - np.mean(lst[i:]))
        if diff < min_diff:
            min_diff = diff
            left_cut, right_cut = i - 1, i
    return lst[: left_cut + 1], lst[right_cut:]