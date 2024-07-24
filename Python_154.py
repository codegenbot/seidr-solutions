def cycpattern_check(a, b):
    if len(a) > len(b):
        return False
    for i in range(len(b) - min(len(a), len(b)) + 1):
        if a == (b[i:] + b[:i]):
            return True
    return False