def cycpattern_check(a, b):
    return any(b[i:] + b[:i] in a for i in range(len(b)))