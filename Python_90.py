def next_smallest(lst):
    lst = sorted(set(lst))
    if len(lst) > 1:
        return lst[1]
    else:
        return None