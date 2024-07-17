def cut_vector(lst):
    min_diff = float("inf")
    cut_index = 0

    for i in range(1, len(lst)):
        diff = abs(np.mean(lst[:i]) - np.mean(lst[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return lst[:cut_index], lst[cut_index:]