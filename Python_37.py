def sort_even(l: list):
    return [i if i % 2 != 0 else j for (i, j) in zip(l[::2], sorted(l[1::2]))]