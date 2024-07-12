def cut_vector(lst):
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])
        diff = abs(left_sum - right_sum)
        if (diff < min_diff and diff != 0) or (left_sum == right_sum):
            min_diff = diff
            split_idx = i

    return lst[:split_idx], lst[split_idx:]