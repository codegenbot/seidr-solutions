def cycpattern_check(a, b):
    return bool(str(b) * (len(str(a)) // len(str(b))) + str(b)[:len(str(a)) % len(str(b))] == str(a))