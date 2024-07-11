def cycpattern_check(a, b):
    for i in range(len(b) + 1):
        if a[i:] + a[:i] == b:
            return True
    return False