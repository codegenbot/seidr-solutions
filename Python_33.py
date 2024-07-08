def sort_third(l: list):
    l[2::3] = sorted(l[2::3])
    return l