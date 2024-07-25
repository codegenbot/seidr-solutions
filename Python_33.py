def sort_third(lst):
    result = []
    while len(lst) > 0:
        temp = lst[:3]
        del lst[:3]
        temp.sort()
        result.append(tuple(temp))
    return tuple(result)