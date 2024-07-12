```
from itertools import zip_longest

def sort_even(l: list):
    evens = sorted([i for i in l if i % 2 == 0])
    result = []
    j = 0
    for i in l:
        if i % 2 == 0:
            result.append(evens[j])
            j += 1
        else:
            result.append(i)
    return [i if i % 2 != 0 else j for i, j in zip_longest(l, result, fillvalue=0)]