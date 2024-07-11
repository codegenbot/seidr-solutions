def cycpattern_check(a, b):
    for i in range(len(b) + 1):
        if a[i:] == b[:len(a[i:])] or a[:i] == b[len(a[i:]):]:
            return True
    return False