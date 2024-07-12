def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        if a[i:].startswith(b) and a[:len(b)].endswith(b):
            return True
    return False.