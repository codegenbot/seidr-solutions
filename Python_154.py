def cycpattern_check(a, b):
    return len(a) == len(b) and (b in a + a or a[::-1] in b + b)