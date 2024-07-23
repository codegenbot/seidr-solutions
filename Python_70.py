def strange_sort_list(lst):
    if len(lst) == 0:
        return lst
    sorted_lst = [min(lst)]
    lst.remove(min(lst))
    while len(lst) > 0:
        sorted_lst.append(max(lst))
        lst.remove(max(lst))
    return sorted_lst