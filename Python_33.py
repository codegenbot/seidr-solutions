def sort_third(l):
    result = []
    i = 0
    j = 0
    while j < len(l):
        if l[j] % 3 != 0:
            result.append(l.pop(j))
        elif not l[:j] or min(x for x in l[:j] if x % 3 != 0) is None or min(x for x in l[:j] if x % 3 != 0) <= l[j]:
            result.append(l.pop(j))
        else:
            j += 1
    return tuple(result)