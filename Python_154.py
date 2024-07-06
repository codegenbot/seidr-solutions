def cycpattern_check(a, b):
    for i in range(len(a)):
        rotation = a[i:] + a[:i]
        if rotation == b:
            return True
    return False