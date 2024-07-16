def cycpattern_check(a, b):
    return any(b in a[i:] + a[:i] or b in a[::-1][i:] + a[::-1][:i] for i in range(len(a)))