```
def sort_even(l: list):
    return [y for (i, x), (_, y) in zip(enumerate(l), sorted([(i, x) for i, x in enumerate(l) if i % 2 == 0]))]