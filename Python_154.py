from itertools import cycle

def cycpattern_check(a, b):
    return len(a) == len(b) and b in cycle(a)