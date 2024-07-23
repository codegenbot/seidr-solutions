```
def sort_even(l: list):
    l.sort()
    result = []
    i, j = 0, len(l) - 1
    while i <= j:
        if l[i] % 2 == 0:
            result.append((l[i], None))
        else:
            result.append((None, l[j]))
        i, j = i + 1, j - 1
    return tuple(result)