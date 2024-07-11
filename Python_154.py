from itertools import permutations

def cycpattern_check(a, b):
    if len(a) != len(b):
        return False

    for perm_a in permutations(a):
        if ''.join(perm_a) == b:
            return True

    return False