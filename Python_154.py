def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    return b in a + a