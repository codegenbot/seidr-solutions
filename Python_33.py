```
def sort_third(l):
    result = []
    i = 0
    while i < len(l):
        if l[i] % 3 != 0:
            result.append(l.pop(i))
            i -= 1
        else:
            min_val = None
            for j in range(min(len(l), i + 2)):
                if l[j] % 3 != 0:
                    if min_val is None or l[j] < min_val:
                        min_val = l[j]
            if min_val is not None:
                result.append(min_val)
                l.remove(min_val)
        i += 1
    return tuple(result)