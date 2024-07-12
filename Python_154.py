def cycpattern_check(a, b):
    if not a:
        return False
    return any(b in a[i:] + a[:i] for i in range(len(a)))