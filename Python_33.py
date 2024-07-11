def sort_third(l: list):
    return sorted([l.index(x) for x, i in enumerate(l) if (i - l.index(x)) % 3 == 0])[0]