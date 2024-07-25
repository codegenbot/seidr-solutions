def sort_third(lst):
    result = []
    while len(lst) > 0:
        temp = [i[2] for i in sorted([tuple(x) for x in lst])]
        del lst[:]
        result.append(temp)
    return tuple(result)