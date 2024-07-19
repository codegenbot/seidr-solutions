def cycpattern_check(a, b):
    return b in a + a or any(b == x for x in (a[i:] + a[:i] for i in range(len(a))))