def cycpattern_check(a, b):
    if a == b:
        return True
    for i in range(len(a)):
        if a[i:] + a[:i] == b:
            return True
    return False