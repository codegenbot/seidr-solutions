def cycpattern_check(a, b):
    for i in range(len(b), len(a)):
        if a[i % len(b)] == b[0] and a[i : i + len(b)] == b:
            return True
    return False