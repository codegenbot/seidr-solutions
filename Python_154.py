def cycpattern_check(a , b):
    return any(b in a[i:] for i in range(len(a)))