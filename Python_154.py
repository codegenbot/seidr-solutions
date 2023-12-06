def cycpattern_check(a, b):
    if not a or not b:
        return False
    return any(b in a[i:] for i in range(len(a)))