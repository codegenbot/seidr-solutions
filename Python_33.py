def sort_third(lst):
    result = []
    while len(lst) > 0:
        temp = [i[2] for i in sorted([x for x in lst])]
        del lst[:]
        result.append(tuple(temp))
    return tuple(result)