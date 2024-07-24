def cycpattern_check(a, b):
    for i in range(len(a)):
        if a[i:] + a[:i] == b:
            return True
    return False