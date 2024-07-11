```
def strange_sort_list(lst):
    if not lst:
        return []

    sorted_lst = [min(lst)]
    while len(sorted_lst) < len(lst):
        sorted_lst.append(max([x for x in lst if x not in sorted_lst]))
        sorted_lst.append(min([x for x in lst if x not in sorted_lst]))

    return sorted_lst