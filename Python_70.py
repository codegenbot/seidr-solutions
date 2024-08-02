```
def strange_sort_list(lst):
    result = []
    while lst:
        if len(lst) > 1:
            result.append(min(lst))
            lst.remove(min(lst))
            result.append(max(lst))
            lst.remove(max(lst))
        else:
            result.extend(lst)
            break
    return result