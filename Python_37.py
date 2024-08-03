def sort_even(l: list):
    return [
        (x if i % 2 != 0 else min([y for y in l if isinstance(y, int) and y % 2 == 0]))
        for i, x in enumerate(l)
    ]