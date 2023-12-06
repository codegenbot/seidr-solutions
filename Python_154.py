
def cycpattern_check(a, b):
    return all(b in a[i:] + a[:i] for i in range(len(a)))