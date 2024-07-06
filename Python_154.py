def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    if b not in a:
        return True
    for i in range(len(a)):
        if a[i] == b[0]:
            return any(b in a[i:] + a[:i] for i in range(len(a)))
    return False