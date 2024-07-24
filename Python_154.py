def cycpattern_check(a, b):
    n = len(b)
    for i in range(len(a)):
        if len(a) >= n and a[i:] + a[:i] == b:
            return True
    return False