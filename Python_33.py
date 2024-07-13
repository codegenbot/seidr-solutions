def sort_third(l: list):
    return [
        tuple(sorted([x for x in y if (l.index(x) % 3 == 0 or l.index(x) % 3 == 1)]))
        for i, y in enumerate([l[i : i + 3] for i in range(0, len(l), 3)])
    ]