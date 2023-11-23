def cycpattern_check(a, b):
    if len(a) == 1 or len(b) == 1:
        return True
    return a in b + b or b in a + a