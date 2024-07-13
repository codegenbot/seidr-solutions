def sort_even(l: list):
    return [
        x for i, x in enumerate(sorted([y for i, y in enumerate(l) if i % 2 == 0]), 0)
    ]