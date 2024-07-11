```
def sort_third(l: list):
    return [
        x if i % 3 != 0 else min(x for x in l)
        for i, x in enumerate(sorted((y for y in l), key=lambda y: (y, i))[::3])
    ]