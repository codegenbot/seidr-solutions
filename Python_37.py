def sort_even(l: list):
    return [
        i if i % 2 != 0 else j
        for i, j in zip(sorted([j for i, j in enumerate(l) if i % 2 == 0]), l)
    ]