def cycpattern_check(a, b):
    return len(a) == len(b) and (b + b).count(a) == 1