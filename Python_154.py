def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    for i in range(len(b)):
        if b in a:
            return True
        b = b[1:] + b[0]
    return False