def sort_third(l):
    result = []
    i = 0
    while i < len(l):
        if l[i] % 3 != 0:
            result.append(l.pop(i))
            i -= 1
        else:
            j = min(len(l), i + 2) - 1
            min_val = l[j]
            for k in range(j, -1, -1):
                if l[k] % 3 != 0 and (min_val is None or l[k] < min_val):
                    min_val = l[k]
            result.append(min_val)
            l.remove(min_val)
        i += 1
    return tuple(result)