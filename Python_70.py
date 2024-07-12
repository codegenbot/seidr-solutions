```
def strange_sort_list(lst):
    result = []
    while lst:
        min_val = min(lst)
        max_val = max(lst)
        if len(lst) > 1:
            lst.remove(min_val)
            result.append(min_val)
            result.append(max_val)
        else:
            result.extend(lst)
            break
    return result