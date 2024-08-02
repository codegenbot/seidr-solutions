def cycpattern_check(a, b):
    return b in a + a + a or any(b in a + a[i:] + a[:i] for i in range(len(b)))