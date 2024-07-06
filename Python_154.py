def cycpattern_check(a, b):
    if len(b) < len(a):
        return False
    for i in range(len(a)):
        if b[i] != a[i]:
            return False
    return True