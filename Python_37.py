def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for i, (x, y) in enumerate(sorted(zip(l, l)))
        if isinstance(x, int)
    ]