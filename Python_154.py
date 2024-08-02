def cycpattern_check(a, b):
    return any(b in a[i:] + a[:i] for i in range(len(a))) or any(b in a[i:] * 2 for i in range(len(a)))