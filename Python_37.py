```
def sort_even(l: list):
    return [y for i, y in sorted((i, y) for i, y in enumerate(l) if y % 2 == 0)]