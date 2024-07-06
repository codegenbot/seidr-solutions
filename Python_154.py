def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        if (a[i:] + a[:i]).encode().zfill(len(a)*2).decode()[len(a):] * 2 == b:
            return True
    return False