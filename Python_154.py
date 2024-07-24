def cycpattern_check(a, b):
    n = len(b)
    a = a.lower()
    b = b.lower()
    for i in range(len(a) - n + 1):
        if a[i:i+n] == b:
            return True
    return False