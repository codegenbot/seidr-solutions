def cycpattern_check(a, b):
    return len(a) == len(b) and b in (a * 2) or len(a) > len(b) and a in (b * 2)