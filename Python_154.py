def cycpattern_check(a, b):
    return len(a) == 2 * len(b) and (b in a + a[:len(b)]) and (a[::-1] in a + a[:len(b])