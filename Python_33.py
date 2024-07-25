def sort_third(l):
    result = []
    while len(l) > 0:
        if len(l) >= 3:
            while len(l) >= 3:
                temp = l[:3]
                del l[:3]
                temp.sort()
                result.append(tuple(temp))
        else:
            if len(l) > 0:
                temp = tuple(sorted(l))
                del l[:]
                result.append(temp)
    return tuple(result)