def cycpattern_check(a, b):
    return b in a + a or any(b == c for c in (a[i:] + a[:i] for i in range(len(a))))