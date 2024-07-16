def sort_third(l: list):
    return [i if i % 3 != 0 else (list(sorted([x for x in l if x % 3 == 0]))[::-1][0] or 0) for i in l]