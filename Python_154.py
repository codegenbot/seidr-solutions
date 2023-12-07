def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    return all(b in a[i:] + a[:i] for i in range(len(a)))