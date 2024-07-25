def sort_third(l):
    result = []
    while len(l) > 0:
        if len(l) >= 3:
            temp = l[:3]
            del l[:3]
            temp.sort()
            result.append(tuple(temp))
        else:
            result.append(tuple(sorted(l)))
            break
    return tuple(result)