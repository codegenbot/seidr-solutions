```
def strange_sort_list(lst):
    result = []
    while lst:
        if len(lst) == 1:
            result.append(lst.pop())
        else:
            min_val = min(lst)
            max_val = max(lst)
            result.append(min_val)
            lst.remove(min_val)
            result.append(max_val)
            lst.remove(max_val)
    return result