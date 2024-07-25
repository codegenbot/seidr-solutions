def sort_third(l: list):
    return [
        x if i % 3 != 0 else tuple(sorted((y, i - l.index(y)) for y in l if (i - l.index(y)) % 3 != 0))
        for i, x in enumerate(l)
    ]