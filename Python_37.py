def sort_even(l: list):
    even = sorted([i for i in l[1::2]])
    return [l[i] if i % 2 else j for i, j in zip(range(len(l)), even)]