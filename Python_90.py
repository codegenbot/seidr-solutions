def next_smallest(lst):
    lst = sorted(lst)
    if len(lst) < 2:
        return None
    else:
        return lst[1]