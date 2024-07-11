def strange_sort_list(lst):
    if not lst:
        return []

    result = []
    min_val = min(lst)
    max_val = max(lst)

    while len(lst) > 0:
        result.append(min_val)
        lst.remove(min_val)
        if len(lst) > 0:
            result.append(max_val)
            lst.remove(max_val)
            max_val, min_val = min(lst), max(lst)
        else:
            break

    return result