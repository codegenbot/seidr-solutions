def cycpattern_check(a, b):
    return len(a) == len(b) and any(a[i:] + a[:i] == b for i in range(len(a)))