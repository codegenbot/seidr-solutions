def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    for _ in range(len(a)):
        if b in a:
            return True
        a = a[1:] + a[0]
    return False