def sort_third(l: list):
    sorted_third = sorted([x for x in l if (l.index(x)) % 3 == 0])
    return [x if i % 3 != 0 else sorted_third.pop(0) for i, x in enumerate(l)]