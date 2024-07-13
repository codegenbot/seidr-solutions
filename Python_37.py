def sort_even(l: list):
    return [
        x if i % 2 else sorted([y for y in l if (i - l.index(y)) % 2 == 0])[::-1][j]
        for j, x in enumerate(l)
    ]