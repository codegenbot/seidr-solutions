def cycpattern_check(a, b):
    while len(b) <= len(a):
        if a.__contains__(b):
            return True
        b = b[1:] + b[:1]
    return False