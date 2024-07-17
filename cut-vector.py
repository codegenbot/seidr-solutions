def cut_vector(lst):
    if len(lst) == 1 or all(x == lst[0] for x in lst):
        return (str(lst), str(lst))

    left = [x for x in lst[:-1] if x <= lst[-1]]
    right = [x for x in lst[1:] if x >= lst[0]]

    diff_min = min(abs(x - y) for x in left for y in right)

    left_diff = [x for x in left if abs(x - lst[0]) == diff_min]
    right_diff = [y for y in right if abs(y - lst[-1]) == diff_min]

    return (str(left_diff + [lst[0]]), str([lst[-1]] + right_diff))