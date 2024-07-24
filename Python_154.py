def cycpattern_check(a, b):
    return len(a) == len(b) and (b in (a + a) if len(a) <= len(b) else b in (a + a)[:len(a]) )