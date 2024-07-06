def sort_third(l):
    return sorted([x if i % 3 != 0 else min(y for y in l if i % 3 == 2 and l.index(y) % 3 != 0) or min(iter(l)) for i, x in enumerate(l)])