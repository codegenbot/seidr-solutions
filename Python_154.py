def cycpattern_check(a, b):
    return b in a + a or b in a + a[::-1]