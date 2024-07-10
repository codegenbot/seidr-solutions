def cycpattern_check(a, b):
    return len(a) == len(b) and (a in b * 2 or a in b[::-1] * 2)