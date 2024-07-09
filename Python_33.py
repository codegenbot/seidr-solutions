```
def sort_third(l: list):
    result = []
    for i, x in enumerate(l):
        if i % 3 != 0:
            result.append(x if i % 3 != 0 else min([y for y in l if y == x and i % 3 != 0]))
    return result