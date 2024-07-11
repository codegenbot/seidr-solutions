def cycpattern_check(a, b):
    return len(a) == len(b) and b in (a + a) and a in (b + b) and len(set(a)) == len(set(b)) and a in (b * 2)