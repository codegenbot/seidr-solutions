from itertools import cycle


def cycpattern_check(a, b):
    return (
        len(a) == len(b) and b in cycle(a) or len(a) + 1 == len(b) and b[1:] in cycle(a)
    )