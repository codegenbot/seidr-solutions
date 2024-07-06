def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    a.sort()
    b.sort()
    return str(a) == str(b)