def cycpattern_check(a, b):
    if len(b) == 0:
        return False
    return any(b in a[i:] for i in range(len(a)))