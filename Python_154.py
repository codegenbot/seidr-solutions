def cycpattern_check(a, b):
    for i in range(len(b)):
        if a[i:] + b[:i] == b:
            return True
    return False