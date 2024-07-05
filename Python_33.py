```
def sort_third(l):
    first = [i for i in l if i % 3 != 0]
    second = sorted([i for i in l if i % 3 == 0])
    result = []
    i, j = 0, 0
    while i < len(first) and j < len(second):
        if first[i] <= second[j]:
            result.append(first.pop(i))
        else:
            result.append(second.pop(j))
        i += 1
        j += 1
    result.extend(first)
    result.extend(second)
    return tuple(result)