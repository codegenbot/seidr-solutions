def sort_even(l: list):
    even = sorted([x for x in l[::2]])
    return [
        y if i % 2 == 0 else x for i, (x, y) in enumerate(zip(reversed(l[1::2]), even))
    ]