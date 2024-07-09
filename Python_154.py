def cycpattern_check(a, b):
    return len(a) == len(b) * 2 and b in a + a[:len(a)//2]