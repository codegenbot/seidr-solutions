def cycpattern_check(a, b):
    return len(b) <= len(a) and b in (a + a)