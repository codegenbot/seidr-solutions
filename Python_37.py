def sort_even(l: list):
    return [x if i % 2 != 0 else min([y for y in l if y % 2 == 0]) or next(iter(l)) for i, x in enumerate(l)]