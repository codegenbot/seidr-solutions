def next_smallest(lst):
    unique_lst = list(set(lst))
    if len(unique_lst) < 2:
        return None
    unique_lst.sort()
    return unique_lst[1]