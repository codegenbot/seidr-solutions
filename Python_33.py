def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([y for y in l if (j := i - (l.index(y) + 1)) % 3 != 0])[0]
        for i, x in enumerate(l)
    ]