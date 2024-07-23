def cut_vector(lst):
    n = len(lst)
    min_diff = float("inf")
    split_idx = -1

    for i in range(1, n):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        if left_sum == right_sum:
            return [lst[:i], lst[i:]]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_idx = i

    if split_idx != -1:
        return [lst[: split_idx + 1], lst[split_idx + 1 :]]
    else:
        return [lst, []]