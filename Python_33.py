```Python
def sort_third(l: list):
    result = []
    i = 0
    while i < len(l):
        result.append(
            x if i % 3 != 0 else sorted([y for y in l[i:] if (l.index(y) + 1) % 3 == 0])[0]
        )
        i += 1
    return tuple(result)