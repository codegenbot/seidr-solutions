def cycpattern_check(a, b):
    return a and b and len(a) == len(b) and b in (a + a) and a in b