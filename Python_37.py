def sort_even(l: list):
    even = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    return [x if i % 2 != 0 else y for i, x in enumerate(l)]