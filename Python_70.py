```
def strange_sort_list(lst):
    if not lst:
        return []

    result = []
    min_val = min(lst)
    max_val = max(lst)

    while len(result) < len(lst):
        if min_val in lst:
            result.append(min_val)
            lst.remove(min_val)
        elif max_val in lst:
            result.append(max_val)
            lst.remove(max_val)
        else:
            break

    result.extend(sorted(lst))
    return result