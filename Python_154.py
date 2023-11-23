def cycpattern_check(a, b):
    return b in (a + a) or a[::-1] in (b[::-1] + b)