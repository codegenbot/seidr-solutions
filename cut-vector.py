def cut_vector(lst):
    if len(lst) == 1 or all(x == lst[0] for x in lst):
        return [lst], []
    left_sum = sum(lst[:i]) for i in range(len(lst)))
    min_diff = float('inf')
    cut_index = -1
    for i in range(1, len(lst)):
        diff = abs(left_sum[i-1] - sum(lst[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    left = lst[:cut_index]
    right = lst[cut_index:]
    return [left], [right]