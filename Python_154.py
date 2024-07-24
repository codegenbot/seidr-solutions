def cycpattern_check(a, b):
    n = len(b)
    for i in range(n):
        if a == (b[i:] + b[:i]):
            return True
    return False