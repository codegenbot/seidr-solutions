def cycpattern_check(a, b):
    return a == (a + b)[-(len(b) + 1) :]