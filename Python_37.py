def sort_even(l: list):
    l_sorted = sorted(l[::2])
    return [x if i % 2 == 0 else y for x, y in zip(l, l_sorted)]