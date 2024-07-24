def cycpattern_check(a, b):
    for i in range(len(b) - len(a) + 1):
        if a == (b[i:] + b[:i]):
            return True
    return False