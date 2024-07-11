def cycpattern_check(a, b):
    return len(a) == len(b) and sorted(b) == sorted(a) and b in a + a