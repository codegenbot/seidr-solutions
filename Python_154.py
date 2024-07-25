def cycpattern_check(a, b):
    return b in (a + a) and len(a) == len(b) or b in (a[i:] + a[:i] for i in range(len(a)))