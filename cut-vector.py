def cut_vector(lst):
    left_sum = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(len(lst)):
        right_sum = sum(lst[i:])

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

        left_sum += lst[i]

    return [lst[:split_index], lst[split_index:]]