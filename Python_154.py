def cycpattern_check(a, b):
    return any(b == a[i:] + a[:i] for i in range(len(a)))