```
def sort_third(l):
    result = []
    i = 0
    j = 0
    while j < len(l):
        if i < j:
            if i >= len(l):
                while True:
                    if l[i % len(l)] % 3 != 0:
                        break
                    i += 1
            if l[i % len(l)] % 3 == 0:
                result.append(l.pop(i % len(l)))
        else:
            if j >= len(l):
                while True:
                    if l[j % len(l)] % 3 != 0:
                        break
                    j += 1
            if l[j % len(l)] % 3 != 0:
                result.append(l.pop(j % len(l)))
    return tuple(result)