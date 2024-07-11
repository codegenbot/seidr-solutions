def cycpattern_check(a, b):
    return b in a + a and len(a) == len(b) and a != b or b in (a * 2)[1:-1]