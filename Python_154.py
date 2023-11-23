def cycpattern_check(a, b):
    return len(a) == len(b) and (b == (a + a) or b == (a[::-1] + a[::-1]))