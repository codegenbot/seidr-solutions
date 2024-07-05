```
def sort_third(l):
    result = []
    i = 0
    j = 0
    while j < len(l):
        if i < j:
            if i >= len(l):
                i %= len(l)
            if l[i] % 3 == 0:
                result.append(l.pop(i))
        else:
            if j >= len(l):
                j %= len(l)
            if l[j] % 3 != 0:
                result.append(l.pop(j))
    return tuple(result)