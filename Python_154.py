def cycpattern_check(a, b):
    return any(b in a[i:] + a[:i] for i in range(1, len(a))) or b in a + a