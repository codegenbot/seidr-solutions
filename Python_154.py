def cycpattern_check(a, b):
    n = len(b)
    for i in range(n):
        if b in a[i:] + a[:i]:
            return True
    return False