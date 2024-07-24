def cycpattern_check(a, b):
    for i in range(len(b) - min(len(a), len(b)) + 1):
        if a == (b[i:] + b[:i]):
            return True
    return False