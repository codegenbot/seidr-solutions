def cycpattern_check(a, b):
    return len(a) == len(b) and b in (a[1:-1] * 2)