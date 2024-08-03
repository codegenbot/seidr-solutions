def sort_even(l: list):
    return [x if i % 2 != 0 else y for i, (x, y) in enumerate(zip(*sorted(zip(l[::2], l[1::2]))))]