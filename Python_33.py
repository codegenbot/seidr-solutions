def sort_third(l):
    result = []
    while len(l) > 0:
        if len(l) >= 3:
            temp = l[:3]
            del l[:3]
            temp.sort()
            result.append(tuple(temp))
        else:
            if len(l) > 0:
                result.append(tuple(sorted(l)))
            else:
                break
    return tuple(result)