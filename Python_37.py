def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    return [x if i % 2 != 0 else y for _, (i, y) in zip(range(len(l)), enumerate(even))]