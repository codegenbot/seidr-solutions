def cut_vector(lst):
    min_diff = float("inf")
    split_left_idx = 0
    split_right_idx = 0
    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_left_idx = i-1
            split_right_idx = i
    return split_left_idx, split_right_idx