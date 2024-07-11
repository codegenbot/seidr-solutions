from itertools import cycle


def sort_third(l: list):
    first_half = sorted((x for i, x in enumerate(l) if i % 3 != 0))
    second_half = sorted(
        (x for i, x in enumerate(l) if i % 3 == 0 and x not in first_half), reverse=True
    )
    return [next(c) if i % 3 != 0 else next(c) for i, _ in enumerate(l)]