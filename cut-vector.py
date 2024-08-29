def cut_vector(lst):
    min_diff = float("inf")
    split_index = 0
    left_sum = sum(lst[:1])

    for i in range(1, len(lst)):
        right_sum = sum(lst[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return [lst[:split_index], lst[split_index:]]