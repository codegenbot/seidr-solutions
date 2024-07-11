def sort_third(l: list):
    return sorted([x for x in l if int(x) % 3 != 0]) + sorted(
        [x for x in l if int(x) % 3 == 0]
    )