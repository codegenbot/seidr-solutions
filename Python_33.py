def sort_third(l: list):
    return sorted([x for i, x in enumerate(l) if (i + 1) % 3 != 0]) + sorted(
        [y for i, y in enumerate(l) if (i + 1) % 3 == 0]
    )