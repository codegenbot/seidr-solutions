def cycpattern_check(a, b):
    return len(a) == len(b) and b in (a * 2) or a[::-1] in (b * 2)