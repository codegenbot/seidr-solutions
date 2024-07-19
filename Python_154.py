def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    return any(b == a[i:] + a[:i] for i in range(len(a)))