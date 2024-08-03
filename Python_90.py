def next_smallest(lst):
    if len(lst) < 2:
        return None
    lst.sort()
    if lst[0] != lst[1]:
        return lst[1]
    else:
        return None