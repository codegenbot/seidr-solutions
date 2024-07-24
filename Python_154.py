def cycpattern_check(a, b):
    n = len(b)
    for i in range(len(a) - n + 1):
        if a[i : i + n] == b:
            return True
    return False