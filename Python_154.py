def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        if (a[i:] + a[:i]).encode() == b.encode():
            return True
    return False