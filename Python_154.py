def cycpattern_check(a, b):
    for i in range(len(b)):
        if a[i:] == b[: len(a[i:]) + i]:
            return True
    return False