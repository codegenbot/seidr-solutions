def cycpattern_check(a, b):
    for i in range(min(len(a), len(b))):
        if a[i:].casefold() == b[i:].casefold():
            return True
    return False