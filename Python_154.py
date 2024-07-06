def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for j in range(len(a)):
        if a[j:] + a[:j] == b:
            return True
    return False