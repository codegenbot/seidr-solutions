def sort_third(l: list):
    return sorted([x for idx, x in enumerate(l) if (idx - l.index(x)) % 3 == 0])[0]