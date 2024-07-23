def sort_third(l: list):
    first = [i for i in l if i % 3 != 0]
    rest = [i for i in l if i % 3 == 0]
    return sorted(rest) + sorted(first)