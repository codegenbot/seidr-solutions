def sort_even(l: list):
    return [
        x if i % 2 == 0 else y
        for i, (x, y) in enumerate(zip(sorted([y for y in l[1::2]]), l[::2]))
    ]