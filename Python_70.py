```
def strange_sort_list(lst):
    result = []
    while lst:
        min_val = min(lst)
        max_val = max(lst)
        if len(lst) % 2 != 0:
            result.append(min_val)
        else:
            result.append(max_val)
        lst.remove(min_val)
        if len(lst) > 1:
            lst.remove(max_val)
    return result