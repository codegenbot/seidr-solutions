def cycpattern_check(a, b):
    if b in a:
        return True
    for i in range(len(b)):
        b_rotated = b[i:] + b[:i]
        if b_rotated in a:
            return True
    return False