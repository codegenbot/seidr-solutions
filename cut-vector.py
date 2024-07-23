def cut_vector(lst):
    n = len(lst)
    min_diff = float("inf")
    split_idx = -1

    for i in range(1, n):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        if diff <= min_diff:
            min_diff = diff
            split_idx = i

    return [lst[:split_idx + 1], lst[split_idx + 1 :]]