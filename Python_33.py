def sort_third(l: list):
    return sorted([x if i % 3 != 0 else min(y for y in l if (i+1) % 3 == 0 and l.index(y) % 3 != 0 or next(iter(l)) for i, x in enumerate(l)])