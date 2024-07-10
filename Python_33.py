def sort_third(l: list):
    return [
        sorted([x for i, x in enumerate(l) if i % 3 == 0]),
        *l[1::3],
        *[x for i, x in enumerate(l) if i % 3 != 0],
    ]