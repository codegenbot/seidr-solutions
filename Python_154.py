def cycpattern_check(a, b):
    for _ in range(len(a)):
        a = a[1:] + a[0]
        if b in a:
            return True
    return False