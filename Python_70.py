```
def strange_sort_list(lst):
    if not lst:
        return []

    result = []
    min_val = min(lst)
    max_val = max(lst)

    while min_val in lst or max_val in lst:
        result.append(min_val)
        lst.remove(min_val)
        if len(lst) == 0:
            break
        min_val = min(lst)
        result.append(max_val)
        lst.remove(max_val)
        if len(lst) == 0:
            break
        max_val = max(lst)

    return result