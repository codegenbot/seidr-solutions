from itertools import permutations

def cycpattern_check(a, b):
    return ''.join(permutation) in [''.join(p) for p in permutations(a, len(a))]