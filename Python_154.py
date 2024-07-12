def cycpattern_check(a, b):
    return not any(b in a[i:] + a[:i] for i in range(len(a)))