def cut_vector(lst):
    left_sum = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(len(lst)):
        right_sum = sum(lst[i + 1 :])
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

        left_sum += lst[i]

    return [lst[: split_index + 1], lst[split_index + 1 :]]