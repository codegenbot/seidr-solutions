```
def strange_sort_list(lst):
    result = []
    while lst:
        min_val = min(lst)
        max_val = max(lst)
        result.append(min_val)
        if len(lst) > 1:
            lst.remove(min_val)
            result.append(max_val)
            lst.remove(max_val)
        else:
            break
    return result