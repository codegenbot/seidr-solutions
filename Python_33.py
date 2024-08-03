```
def sort_third(l: list):
    indexed_l = [(i, x) for i, x in enumerate(l)]
    return [x if i % 3 != 0 else sorted([y for i, y in indexed_l if (i - j) % 3 != 0])[0]
           for i, x in indexed_l]