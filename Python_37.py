def sort_even(l: list):
    return [
        x for i, x in enumerate(sorted([y for j, y in enumerate(l) if j % 2 == 0]))
    ] + [x for i, x in enumerate(l) if i % 2 != 0]