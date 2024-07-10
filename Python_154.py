def cycpattern_check(a, b):
    return b in (a + a) or b[::-1] in (a + a)