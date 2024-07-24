def cycpattern_check(a, b):
    n = len(b)
    for i in range(len(a)):
        if a[i:i+n] == b:
            return True
    return False