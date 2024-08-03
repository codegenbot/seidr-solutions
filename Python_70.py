```
def strange_sort_list(lst):
    if not lst:
        return []

    result = []
    min_val = min(lst)
    max_val = max(lst)

    while len(result) < len(lst):
        if min_val in lst and max_val in lst:
            result.append(min_val)
            min_val = min([x for x in lst if x != min_val])
            result.append(max_val)
            max_val = max([x for x in lst if x != max_val])
        elif min_val in lst:
            result.append(min_val)
            min_val = min([x for x in lst if x != min_val])
        else:
            result.append(max_val)
            max_val = max([x for x in lst if x != max_val])

    return result