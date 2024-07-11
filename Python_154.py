def cycpattern_check(a, b):
    return len(a) == len(b) and b in a + a and a.count(b) >= 2