def cycpattern_check(a, b):
    return b in a * 2 or b in (a[i:] + a[:i] for i in range(len(a)))