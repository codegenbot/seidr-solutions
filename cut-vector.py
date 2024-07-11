def cut_vector(lst):
    if len(set(lst)) == 1:
        return [lst], []
    min_diff = float("inf")
    split_idx = -1
    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])
        diff = abs(left_sum - right_sum)
        if left_sum == right_sum and i > 1:
            split_idx = i
        elif diff < min_diff:
            min_diff = diff
            split_idx = i
    if split_idx == -1:
        return [lst], []
    else:
        return lst[:split_idx], lst[split_idx:]