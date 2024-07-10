def cut_vector(lst):
    total_sum = sum(lst)
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if (left_sum == right_sum) or (diff < min_diff):
            min_diff = diff
            split_idx = i

    return lst[:split_idx], lst[split_idx:]