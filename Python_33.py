def sort_third(l):
    return sorted([x for x in l if (l.index(x) + 1) % 3 == 0])