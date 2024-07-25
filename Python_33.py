def sort_third(lst):
    result = []
    while len(lst) >= 3:
        temp = [i[2] for i in sorted([(a, b, c) for (a, b), c in zip(*[iter(lst)]*3)])]
        del lst[:3]
    else:
        temp = [lst.pop(0)]
        if not lst: del lst[:]
    result.append(tuple(temp))
    return tuple(result)