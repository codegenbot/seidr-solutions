```
def sort_third(l: list):
    result = []
    for i, val in enumerate(l):
        if i % 3 == 0:
            sorted_vals = sorted([x for x in l if (i - j) % 3 != 0])
            result.append(sorted_vals[::-1][0])
        else:
            result.append(val)
    return result