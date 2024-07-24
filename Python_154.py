def cycpattern_check(a, b):
    for i in range(len(a) // len(b)):
        if a[i * len(b) : (i + 1) * len(b)] == b:
            return True
    return False