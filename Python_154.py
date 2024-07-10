def cycpattern_check(a, b):
    if len(a) != len(b):
        return False

    a = a + a

    if b in a:
        return True

    return False