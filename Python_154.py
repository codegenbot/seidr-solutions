def cycpattern_check(a, b):
    return len(a) == len(b) and (b in (a + a)) or (b[::-1] in (a[::-1] + a[::-1]))