def cycpattern_check(a, b):
    if len(a) == 0 or len(b) == 0:
        return False
    return any(b in a[i:] + a[:i] for i in range(len(a)))