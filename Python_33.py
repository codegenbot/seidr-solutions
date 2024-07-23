def sort_third(l: list):
    return [
        x if i % 3 != 0 else sorted([y for y in l if (i - k) % 3 != 0], key=l.index)
        for i, x in enumerate(l)
        for k, y in enumerate(l)
    ]