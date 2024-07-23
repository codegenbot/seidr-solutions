def next_smallest(lst):
    if len(lst) < 2:
        return None
    lst = sorted(set(lst))
    for i in range(len(lst)-1):
        if lst[i] != lst[i+1]:
            return lst[i+1]
    return None