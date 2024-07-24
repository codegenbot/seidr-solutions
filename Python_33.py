```
def sort_third(l: list):
    result = []
    for i, x in enumerate(l):
        if (i + 1) % 3 == 0 and len(result) > 0:
            y, z = map(sum / len, zip(*[l[i-2::3]]))
            result.append(y)
        else:
            result.append(x)
    return tuple(result)