def cycpattern_check(a, b):
    return b in a + a or any(b in a[i+1:] + a[:i+1] for i in range(len(a)))