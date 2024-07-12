```
def strange_sort_list(lst):
    if not lst:
        return []
    min_val = min(lst)
    max_val = max(lst)
    result = [min_val]
    while True:
        new_min = min(x for x in lst if x != min_val and x != max_val)
        if new_min == max_val:
            break
        result.append(new_min)
        max_val = max(x for x in lst if x not in result)
    return result