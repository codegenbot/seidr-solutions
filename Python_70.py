def strange_sort_list(lst):
    result = []
    while lst:
        result.append(min(lst))
        if len(lst) > 1:
            lst.remove(min(lst))
            result.append(max(lst))
            lst.remove(max(lst))
    return result