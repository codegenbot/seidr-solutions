def strange_sort_list(lst):
    result = []
    while len(lst) > 0:
        result.append(min(lst))
        lst.pop(lst.index(min(lst)))
        if len(lst) > 0:
            result.append(max(lst))
            lst.pop(lst.index(max(lst)))
    return result