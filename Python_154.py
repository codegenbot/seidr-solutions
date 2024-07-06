def cycpattern_check(a, b):
    return any(b in a[i : i + len(b)] for i in range(len(a)))