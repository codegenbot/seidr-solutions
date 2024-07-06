def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        a = a[i:] + a[:i]
        if a == b:
            return True
    return False