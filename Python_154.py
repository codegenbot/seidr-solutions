def cycpattern_check(a, b):
    return len(a) == len(b) and any(a == (b * 2)[i : i + len(a)] for i in range(len(a)))