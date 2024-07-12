def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    if a.endswith(b) and a[:len(b)] == b:
        return True
    return False