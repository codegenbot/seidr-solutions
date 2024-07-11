def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    return [i if i % 2 != 0 else y for i, y in zip(sorted(l), even)]