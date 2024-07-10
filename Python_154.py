def cycpattern_check(a, b):
    return len(a) == len(b) and (b in 2 * a or a in 2 * b)