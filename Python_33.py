def sort_third(l: list):
    l.sort()
    return [i if i % 3 != 0 else l[0] for i in l]