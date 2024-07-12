```
from itertools import zip_longest

def sort_even(l: list):
    evens = sorted([i for i in l if i % 2 == 0])
    odd_l = [i for i in l if i % 2 != 0]
    return sorted(list(zip_longest(evens + odd_l, fillvalue=0)))