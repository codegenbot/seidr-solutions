def cycpattern_check(a, b):
    return str(a) == (str(b) * (len(str(a)) // len(str(b))) + str(b)[:len(str(a)) % len(str(b))])