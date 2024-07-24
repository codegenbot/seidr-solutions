def cycpattern_check(a, b):
    if len(str(b)) == 0:
        return str(a) == str(b)
    return str(b) * (len(str(a)) // len(str(b))) + str(b)[:len(str(a)) % len(str(b))] != str(a)