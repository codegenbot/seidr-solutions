def cycpattern_check(a, b):
    a = a.lower()
    n = len(b)
    for i in range(len(a) - n + 1):
        if a[i : i + n] == b.lower():
            return True
    return False