def strange_sort_list(lst):
    result = []
    while lst:
        if len(lst) > 1:
            result.append(min(lst))
            lst.pop(lst.index(min(lst)))
        else:
            result.append(lst[0])
            lst.pop(0)
    return result