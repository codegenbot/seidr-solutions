def sort_even(l: list):
    evens = sorted([i for i in l if i % 2 == 0])
    return [j if i % 2 == 0 else i for i, j in zip(evens, l)]