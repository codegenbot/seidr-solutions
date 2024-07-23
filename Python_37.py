def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    return [x if i % 2 != 0 else min(evens) for i, x in enumerate(l)]