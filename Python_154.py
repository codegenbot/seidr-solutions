def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    if a[:len(b)] == b:
        return True
    for i in range(len(a) - len(b) + 1):
        if a[i:i+len(b)] == b:
            return True
    return False