def double_the_difference(lst):
    sorted_lst = sorted([abs(x) for x in lst])
    if len(sorted_lst) < 2:
        return None
    else:
        return (sorted_lst[-1] - sorted_lst[0]) * 2