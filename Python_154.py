def cycpattern_check(a, b):
    temp = a + a
    if len(a) != len(b):
        return False

    return b in temp[:len(a)]