def sort_even(l: list):
    evens = sorted([i for i in l if i % 2 == 0])
    odds = sorted([i for i in l if i % 2 != 0])
    return [j if j % 2 != 0 else i for i, j in zip(odds, evens)]