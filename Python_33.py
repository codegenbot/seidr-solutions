def sort_third(l):
    result = []
    i = 0
    while i < len(l):
        if l[i] % 3 != 0:
            result.append(l.pop(i))
        elif min(x for x in l if x % 3 != 0) is None or l[l.index(min(x for x in l if x % 3 != 0))] <= l[i]:
            temp = l.pop(l.index(min(x for x in l if x % 3 != 0)))
            i -= 1
        i += 1
    return tuple(result)