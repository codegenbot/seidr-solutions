def sort_even(l: list):
    return [
        y if i % 2 != 0 else x
        for i, x in enumerate(sorted([x for i, x in enumerate(l) if i % 2 == 0]))
    ]