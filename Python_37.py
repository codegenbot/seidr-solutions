def sort_even(l: list):
    even = sorted([x for x in l if abs(x) % 2 == 0])
    return tuple(even + [x for x in l if abs(x) % 2 != 0])