```
def strange_sort_list(lst):
    result = []
    while lst:
        if len(lst) == 1:
            result.append(lst.pop())
        else:
            result.append(min(lst))
            lst.remove(min(lst))
            if lst:
                result.append(max(lst))
                lst.remove(max(lst))
    return result