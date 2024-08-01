def cut_vector(lst):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        if left_sum == right_sum:
            return lst[:i], lst[i:]
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    left_sum = sum(lst[:split_index])
    right_sum = sum(lst[split_index:])

    if left_sum == right_sum:
        return lst[:split_index], lst[split_index:]
    else:
        return lst[:split_index], lst[split_index:], [0]