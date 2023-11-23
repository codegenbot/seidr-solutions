def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    
    temp = a + a
    return b in temp[:len(a)]