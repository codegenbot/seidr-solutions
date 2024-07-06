def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    a = a.lower()
    for i in range(len(a)):
        if str(a[i:] + a[:i]) == str(b):
            return True
    return False