def sort_even(l: list):
    even = sorted([i for i in l if isinstance(i, int) and i % 2 == 0])
    return [i if not isinstance(i, int) or i % 2 != 0 else j for i, j in zip(even, l)]