def next_smallest(lst):
    lst = [x for x in set(lst)]
    if len(lst) < 2:
        return None
    lst.sort()
    return lst[1]