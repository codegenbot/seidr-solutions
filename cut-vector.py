def cut_vector(lst):
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        if left_sum == right_sum:
            return (lst[:i], lst[i:])
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_idx = i

    left_sum = sum(lst[:split_idx])
    right_sum = sum(lst[split_idx:])

    if left_sum == right_sum:
        return (lst[:split_idx], lst[split_idx:])
    else:
        return (lst[:split_idx], [lst[split_idx]], list(reversed(lst[:split_idx])))