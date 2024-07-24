def cycpattern_check(a, b):
    for i in range(len(a)):
        if a[i : i + len(b)] == b:
            return True
    return False