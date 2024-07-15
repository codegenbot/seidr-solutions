def cycpattern_check(a, b):
    if len(a) != len(b):
        return False

    for i in range(len(a)):
        if b == a[i:] + a[:i]:
            return True

    return False