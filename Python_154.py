def cycpattern_check(a, b):
    if b not in a:
        return False
    return any(b in a[i:] + a[:i] for i in range(len(a)))