def cycpattern_check(a, b):
    return all(b in a[i:] for i in range(len(a)))