def cycpattern_check(a, b):
    if any(b in a[i:] + a[:i] for i in range(len(a))):
        return True
    else:
        return False