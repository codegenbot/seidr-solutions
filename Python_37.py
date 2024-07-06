def sort_even(l: list):
    evens = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    return [evens[i // 2] if i % 2 == 0 else x for i, x in enumerate(l)]