def cycpattern_check(a, b):
    return len(a) == len(b) and (b in (a * 2) or b[::-1] in (a * 2))