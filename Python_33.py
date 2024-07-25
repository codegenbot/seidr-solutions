def sort_third(lst):
    result = []
    while len(lst) > 0:
        if len(lst) >= 3:
            temp = lst[:3]
            del lst[:3]
            result.append(tuple(sorted(temp)))
        else:
            result.append(tuple(sorted(lst)))
    return tuple(result)