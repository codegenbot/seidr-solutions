def sort_third(l: list):
    l.sort()
    l1 = [x for i, x in enumerate(l) if i % 3 == 0]
    l2 = [x for i, x in enumerate(l) if i % 3 == 1]
    l3 = [x for i, x in enumerate(l) if i % 3 == 2]

    return l1 + l2 + l3