def sort_even(l: list):
    return [x if (i := i % 2) != 0 else sorted([y for y in l if y % 2 == 0])[index] for index, _ in enumerate(l)]