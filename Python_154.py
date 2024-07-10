def cycpattern_check(a, b):
    return len(a) == len(b) and b in a * 2 or a in b * 2