def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for (i, x), (j, y) in zip(enumerate(l), [(y, x) for x, y in sorted(zip(l, l))])
    ]