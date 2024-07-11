def cycpattern_check(a, b):
    if len(a) != len(b):
        return False

    if b in a + a:
        return True

    return False