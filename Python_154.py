def cycpattern_check(a, b):
    return b in (a * 2)[:len(a)*2-1]