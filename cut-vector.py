def cut_vector(lst):
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        left_max = max(lst[:i])
        right_max = max(lst[i:])
        if left_max == right_max:
            return lst[:i], lst[i:]
        diff = abs(sum(lst[:i]) - sum(lst[i:]))
        if diff < min_diff:
            min_diff = diff
            split_idx = i

    return lst[:split_idx], lst[split_idx:]