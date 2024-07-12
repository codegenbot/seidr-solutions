from itertools import zip_longest

def sort_even(l: list):
    evens = sorted([i for i in l if i % 2 == 0])
    return [i if i % 2 != 0 else j for i, j in zip_longest(l, evens, fillvalue=0)]