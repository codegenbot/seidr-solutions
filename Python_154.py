def cycpattern_check(a, b):
    for _ in range(len(b)):
        if b in a or b[::-1] in a:
            return True
    return False