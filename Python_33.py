def sort_third(lst):
    result = []
    while len(lst) > 0:
        lst.sort(key=lambda x: (x[2], x))
        temp = [i[2] for i in lst]
        del lst[:]
        result.append(tuple(temp))
    return tuple(result)