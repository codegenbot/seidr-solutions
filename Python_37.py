def sort_even(l: list):
    return sorted([x for i, x in enumerate(l) if i % 2 == 0]) + [
        x for i, x in enumerate(l) if i % 2 != 0
    ]