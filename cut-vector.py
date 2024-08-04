def cut_vector(lst):
    if len(lst) == 1:
        return lst[0], []

    left = right = float("inf")
    for i in range(len(lst)):
        diff = abs(sum(lst[: i + 1]) - sum(lst[i:]))
        if diff <= min(left, right):
            left, right = diff, diff
            cut_idx = i

    return lst[:cut_idx], lst[cut_idx:]