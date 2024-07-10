def cycpattern_check(a, b):
    for i in range(len(a) - len(b) + 1):
        if a[i : i + len(b)] == b:
            return True

    for i in range(len(b), len(a)):
        if a[i - len(b) : i + 1] == b:
            return True

    return False