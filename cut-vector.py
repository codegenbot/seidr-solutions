def cut_vector(lst):
    min_diff = float("inf")
    cut_index = -1

    for i in range(1, len(lst)):
        diff = abs(np.mean(lst[:i]) - np.mean(lst[i:]))

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    if cut_index == -1:
        return [lst], [list()]
    else:
        return lst[: cut_index + 1], lst[cut_index:]