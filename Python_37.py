def sort_even(l: list):
    even = sorted([x for x in l[1::2]])
    return [l[i] if i % 2 else x for i, x in enumerate(even)]