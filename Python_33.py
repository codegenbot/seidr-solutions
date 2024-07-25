def sort_third(lst):
    result = []
    while len(lst) > 0:
        temp = [i[2] for i in sorted([(a, b, c) for (a, b), c in zip(*[iter(lst)]*3)])]
        del lst[:]
        result.append(tuple(temp))
    return tuple(result)