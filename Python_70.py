```
def strange_sort_list(lst):
    result = []
    while lst:
        min_val = min(lst)
        max_val = max(lst)
        if min_val < max_val:
            result.append(min_val)
            lst.remove(min_val)
        else:
            result.append(max_val)
            lst.remove(max_val)
    return result