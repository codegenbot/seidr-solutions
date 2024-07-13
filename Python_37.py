def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    return [(x if i % 2 != 0 else evens[-1]) for i, x in enumerate(l)]