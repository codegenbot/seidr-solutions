def cycpattern_check(a, b):
    return b in a + a and len(a) == len(b) if b else False