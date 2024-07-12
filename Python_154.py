def cycpattern_check(a, b):
    return b in a + a or any(b == s for s in (a[i:] + a[:i] for i in range(len(a))))