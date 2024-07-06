def sort_third(l: list):
    l = [x for i, x in enumerate(l) if i % 3 == 0] + [
        y for i, y in enumerate(l) if i % 3 != 0
    ]
    return sorted(l[:]) + l[3:]