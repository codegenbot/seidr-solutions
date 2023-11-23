from itertools import permutations

def cycpattern_check(a, b):
    return b in permutations(a, len(a))