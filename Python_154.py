def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        if a[i:] + a[:i] == b:
            return True
    for i in range(1, len(a)):
        if (a * 2)[i:i+len(b)] == b:
            return True
    return False