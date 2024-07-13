def sort_third(l: list):
    return [
        sorted([y for y in l if (l.index(y) % 3 == 2 and i != l.index(y)) or y < x])
        for i, x in enumerate(l)
    ]