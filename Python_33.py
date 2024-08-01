```
def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([y for y in l if (l.index(y) + 1) % 3 == 1 and y])
        for i, x in enumerate(l)
    ]