def sort_third(l: list):
    l1 = [x for i, x in enumerate(l) if i % 3 != 0] + sorted(
        [x for i, x in enumerate(l) if i % 3 == 0]
    )
    return l1