def cut_vector(lst):
    n = len(lst)
    min_diff = float("inf")
    cut_index = 0

    for i in range(1, n):
        if lst[i - 1] == lst[i]:
            return (lst[:i], lst[i:])
        diff = abs(np.sum(lst[:i]) - np.sum(lst[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return (lst[:cut_index], lst[cut_index:])