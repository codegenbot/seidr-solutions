def strange_sort_list(lst):
    result = []
    while lst:
        result.append(min(lst))
        lst.pop(lst.index(min(lst)))
    return result