def cut_vector(lst):
    n = len(lst)
    for i in range(n - 1):
        if lst[i] == lst[i + 1]:
            return [lst[:i], lst[i:]]
    min_diff = float("inf")
    best_split = None
    for i in range(1, n - 1):
        diff = abs(sum(lst[:i]) - sum(lst[i:]))
        if diff < min_diff:
            min_diff = diff
            best_split = i
    return [lst[:best_split], lst[best_split:]]