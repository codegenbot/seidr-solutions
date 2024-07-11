def cycpattern_check(a, b):
    return len(a) == len(b) and sorted(b) == sorted(a) and a in b * 2 or b in a * 2