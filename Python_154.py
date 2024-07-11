def cycpattern_check(a, b):
    for _ in range(len(a)):
        if b == a[0] + a[-1*a.index(b):]:
            return True
    return False