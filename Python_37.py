def sort_even(l: list):
    return [x for i, x in enumerate(sorted([y for _, y in enumerate(l) if _ % 2 != 0]))] + sorted([x for i, x in enumerate(l) if i % 2 == 0])