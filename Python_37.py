def sort_even(l: list):
    return [
        i if i % 2 != 0 else j
        for i, j in zip(sorted([x if x % 2 != 0 else y for x, y in zip(l, l[1:])]), l)
    ]