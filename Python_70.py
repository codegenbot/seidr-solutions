```
def strange_sort_list(lst):
    if len(lst) == 0:
        return []

    sorted_lst = [min(lst)]
    lst.remove(min(lst))

    while len(lst) > 0:
        sorted_lst.append(max(lst))
        lst.remove(max(lst))

    for _ in range(len(sorted_lst)):
        if len(lst) > 0:
            sorted_lst.append(min(lst))
            lst.remove(min(lst))

    return sorted_lst