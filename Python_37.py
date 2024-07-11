def sort_even(l: list):
    even = sorted([i for i in l[1::2]])
    return [l[i] if i % 2 != 0 else x for i, x in enumerate(even)]