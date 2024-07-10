def cut_vector(lst):
    if len(lst) == 1:
        return lst, []
    min_diff = float("inf")
    split_index = -1
    for i in range(len(lst)):
        left_sum = sum(lst[: i + 1])
        right_sum = sum(lst[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return lst[: split_index + 1], lst[split_index:]