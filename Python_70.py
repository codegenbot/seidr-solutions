```
def strange_sort_list(lst):
    if len(lst) == 0:
        return lst
    result = [min(lst)]
    lst.remove(min(lst))
    while len(lst) > 0:
        result.append(max(lst))
        lst.remove(max(lst))
    result.extend(sorted(lst))
    return result