def cycpattern_check(a, b):
    if len(b) == 0:
        return True
    if a == b:
        return True
    for i in range(len(a) - len(b) + 1):
        if a[i : i + len(b)] == b or a[:i] + a[i + len(b) :] == b:
            return True
    return False