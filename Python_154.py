def cycpattern_check(a, b):
    for i in range(len(b), len(a)):
        if a[i - len(b) : i] == b:
            return True
    return False