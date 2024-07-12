def sort_even(l: list):
    return [y if i % 2 == 0 else x for (i, x), (j, y) in enumerate(sorted(zip(l, l))):