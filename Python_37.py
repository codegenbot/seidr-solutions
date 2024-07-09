def sort_even(l: list):
    even = sorted([x for x in l if i % 2 == 0])
    return [x if i % 2 != 0 else y for i, (x, y) in enumerate(zip(l, even))]