def strange_sort_list(lst):
    if not lst:
        return []

    result = []
    min_val = min(lst)
    max_val = max(lst)

    while len(result) < len(lst):
        if min_val in lst and max_val in lst:
            result.append(min_val)
            result.append(max_val)
            lst.remove(min_val)
            lst.remove(max_val)
            min_val = min(lst)
            max_val = max(lst)
        elif min_val in lst:
            result.append(min_val)
            lst.remove(min_val)
            min_val = min(lst)
        else:
            result.append(max_val)
            lst.remove(max_val)
            max_val = max(lst)

    return result