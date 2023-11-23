def cycpattern_check(a, b):
    return len(a) == len(b) and a != b and b in (a * 2) or b in (a[::-1] * 2)