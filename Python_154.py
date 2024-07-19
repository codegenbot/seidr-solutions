def cycpattern_check(a, b):
    return b in (a + a) and len(a) == len(b) or b in (a + a)[1:]