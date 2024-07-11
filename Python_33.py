def sort_third(l: list):
    return [
        sorted([x for x in l if (i := l.index(x)) % 3 != 0])[0] if i % 3 != 0 else x
        for i, x in enumerate(l)
    ]