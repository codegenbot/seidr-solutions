def next_smallest(lst):
    lst = sorted(set(lst))
    return lst[1] if len(lst) > 1 else None