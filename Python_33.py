def sort_third(lst):
    result = []
    while len(lst) > 0:
        if len(lst) >= 3:
            temp = lst[:3]
            del lst[:3]
            temp.sort()
            result.append(tuple(temp))
        else:
            result.append(tuple(sorted(lst)))
            break
    return tuple(result)