```Python
def sort_third(l: list):
    return sorted([x for x in l if (i := l.index(x)) % 3 == 0], reverse=True) + [x for i, x in enumerate(l) if i % 3 != 0]