def cycpattern_check(a, b):
    for i in range(len(b) - len(a) + 1):
        if a.casefold() == (b[i:i+len(a)].casefold()):
            return True
    return False