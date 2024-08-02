```
def strange_sort_list(lst):
    if not lst:
        return []

    result = []
    while len(lst) > 0:
        min_val = min(lst)
        max_val = max(lst)
        if len(lst) == 1 or (min_val != max_val and len(lst) % 2 == 1):
            result.append(min_val)
            lst.remove(min_val)
        else:
            result.append(max_val)
            lst.remove(max_val)

    return result