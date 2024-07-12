def sort_even(l: list):
    return [
        x if i % 2 != 0 else y
        for i, (x, y) in enumerate(zip(sorted(l)[::2], sorted(l)[1::2]), start=0)
    ]