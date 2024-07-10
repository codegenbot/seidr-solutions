from itertools import zip_longest

def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])

    max_len = max(len(even), len(odd))
    even += [0] * (max_len - len(even))
    odd += [0] * (max_len - len(odd))

    return tuple(min(i, j) if i else j for i, j in zip_longest(even, odd))