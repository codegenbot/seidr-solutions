def cut_vector(lst):
    left = []
    right = []
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        left_sum = sum(left + [lst[i - 1]])
        right_sum = sum(right + [lst[i]])

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_idx = i

    return lst[:split_idx], lst[split_idx:]