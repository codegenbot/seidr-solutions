def cycpattern_check(a, b):
    return b in a + a if len(a) == len(b) else len(a) == len(b) and b in a * 2