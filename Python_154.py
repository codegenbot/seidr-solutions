def cycpattern_check(a, b):
    if len(b) == 0:
        return True
    if a == b:
        return True
    if b in a + a or b in a + a[::-1]:
        return True
    return False