def strange_sort_list(lst):
    result = []
    lst.sort()
    while len(lst) > 0:
        result.append(lst.pop(0))
        if len(lst) > 0:
            lst.sort(reverse=True)
            result.append(lst.pop(0))
    return result