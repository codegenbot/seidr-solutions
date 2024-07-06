def strange_sort_list(lst):
    if not lst:
        return []
    result = [min(lst)]
    while len(result) < len(lst):
        max_val = max([x for x in lst if x not in result])
        result.append(max_val)
        min_val = min([x for x in lst if x not in result])
        result.append(min_val)
    return result