def strange_sort_list(lst):
    sorted_lst = []
    while lst:
        sorted_lst.append(min(lst))
        lst.remove(min(lst))
        if lst:
            sorted_lst.append(max(lst))
            lst.remove(max(lst))
    return sorted_lst