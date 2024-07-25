def sort_third(lst):
    result = []
    while len(lst) >= 3:
        temp = tuple(sorted(lst[:3]))
        del lst[:3]
        result.append(temp)
    if len(lst) > 0:
        result.append(tuple(sorted(lst)))
    return tuple(result)