def cut_vector(lst):
    if len(lst) == 1:
        return lst[0], []
    left_sum = sum(lst[: len(lst) // 2])
    right_sum = sum(lst[len(lst) // 2 :])
    if left_sum == right_sum:
        return tuple([lst[: len(lst) // 2]]), tuple([lst[len(lst) // 2 :]])
    min_diff = abs(left_sum - right_sum)
    for i in range(1, len(lst)):
        new_left_sum = sum(lst[:i])
        new_right_sum = sum(lst[i:])
        diff = abs(new_left_sum - new_right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_point = i
    return tuple([lst[:cut_point]]), tuple([lst[cut_point:]])