def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    a = a.lower()
    b = b.lower()
    for i in range(len(a)):
        if (a[i:] + a[:i]).lower() == b.lower():
            return True
    return False