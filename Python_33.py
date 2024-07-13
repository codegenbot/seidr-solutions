def sort_third(l: list):
    return [
        sorted([x for x in y if (l.index(x)) % 3 == 2 or x < z])
        for i, [y, _, z] in enumerate(zip(*[iter(l)] * 3))
    ]