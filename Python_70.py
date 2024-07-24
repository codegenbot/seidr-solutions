def strange_sort_list(lst):
    if not lst:
        return []

    result = [min(lst)]
    lst.remove(min(lst))

    while lst:
        result.append(max(lst))
        lst.remove(max(lst))

    return result