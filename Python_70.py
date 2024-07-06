def strange_sort_list(lst):
    if not lst:
        return []

    sorted_lst = []
    min_val = min(lst)
    max_val = max(lst)

    while min_val in lst or max_val in lst:
        if min_val in lst:
            sorted_lst.append(min_val)
            lst.remove(min_val)
        if max_val in lst:
            sorted_lst.append(max_val)
            lst.remove(max_val)

    return sorted_lst