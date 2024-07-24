def cycpattern_check(a, b):
    n = len(b)
    for i in range(n - len(a) + 1):
        if a == b[i:i+len(a)]:
            return True
    for i in range(len(a)):
        if a == b[i:] + b[:i]:
            return True
    return False