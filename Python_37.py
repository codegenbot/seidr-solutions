def sort_even(l: list):
    sorted_evens = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    return [x if i % 2 != 0 else y for i, x in enumerate(l) for y in sorted_evens]