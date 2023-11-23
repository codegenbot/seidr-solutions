def cycpattern_check(a, b):
    temp = a + a
    if len(a) == len(b):
        return b in temp[:len(a)]
    return False