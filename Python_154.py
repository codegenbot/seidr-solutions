def cycpattern_check(a, b):
    for i in range(len(b) - min(len(a), len(b)) + 1):
        if a.casefold() == (b[i:].casefold() + b[:i].casefold()):
            return True
    return False