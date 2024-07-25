```
def sort_third(lst):
    result = []
    while len(lst) >= 3:
        temp = sorted(tuple(lst[:3]))
        del lst[:3]
        result.append(temp)
    if len(lst) > 0:
        result.append(sorted(tuple(lst)))
    return tuple(result)