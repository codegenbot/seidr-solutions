```
def strange_sort_list(lst):
    result = []
    while lst:
        result.append(min(lst))
        if len(lst) > 1:
            lst.pop(lst.index(min(lst)))
        else:
            break
    while lst:
        result.append(max(lst))
        if len(lst) > 1:
            lst.pop(lst.index(max(lst)))
        else:
            break
    return result