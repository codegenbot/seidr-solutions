def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        if a[i : i + len(b)] == b:
            return True
    return any(a[i : i + len(b)] == b for i in range(len(a) - len(b) + 1))