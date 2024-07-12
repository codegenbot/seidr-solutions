def cycpattern_check(a, b):
    n = len(a)
    m = len(b)
    if n != m:
        return False
    return b in (a + a)