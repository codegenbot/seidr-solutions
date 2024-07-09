def cycpattern_check(a, b):
    return len(a) == len(b) and b in a + a and b[::-1] in a + a