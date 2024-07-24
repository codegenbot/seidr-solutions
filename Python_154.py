def cycpattern_check(a, b):
    for i in range(len(b) - len(a) + 1):
        if a == (b[i:] + b[:i]):
            return True
    for j in range(1, len(a)):
        if a[j:] + a[:j] == b:
            return True
    return False