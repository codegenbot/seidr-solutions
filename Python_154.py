def cycpattern_check(a, b):
    if len(b) < len(a):
        return False
    for i in range(len(b)):
        if a.casefold() == (b[i:] + b[:i]).casefold():
            return True
    return False