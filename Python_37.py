def sort_even(l: list):
    return [x for i, x in enumerate(l) if i % 2 == 0] + sorted(
        [x for i, x in enumerate(l) if i % 2 != 0]
    )