def sort_third(l: list):
    l.sort()
    return [i if i % 3 != 0 else j for i, j in zip(sorted(l), l)]