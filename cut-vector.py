def cut_vector(lst):
    if len(set(lst)) == 1:
        return [lst], []

    min_diff = float("inf")
    split_idx = 0
    left, right = [], []

    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        diff = abs(left_sum - right_sum)

        if (left_sum == right_sum and i > 1) or (diff < min_diff):
            min_diff = diff
            split_idx = i

    if min_diff == 0:
        return [lst], []
    else:
        left.extend(lst[:split_idx])
        right.extend(lst[split_idx:])
        return left, right