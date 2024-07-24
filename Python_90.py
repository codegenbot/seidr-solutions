def next_smallest(lst):
    if len(lst) < 2:
        return None
    lst.sort()
    for i in range(1, len(lst)):
        if lst[i] != lst[0]:
            return lst[i]
    return None