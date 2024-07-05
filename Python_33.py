```
def sort_third(l):
    result = []
    for item in l:
        if item % 3 == 0:
            result.append(item)
    return tuple(sorted(result))