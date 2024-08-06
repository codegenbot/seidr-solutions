def cut_vector(lst):
    min_diff = float("inf")
    cut_index = -1
    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])
        if left_sum == right_sum:
            return [lst[:i], lst[i:]]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    if cut_index != -1:
        return [lst[:cut_index], lst[cut_index:]]
    else:
        return [lst, []]