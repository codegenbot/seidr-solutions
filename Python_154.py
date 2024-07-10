def cycpattern_check(a, b):
    return len(a) == len(b) and any(b == a[i:] + a[:i] or b == a[-i:] + a[:-i] for i in range(len(a)))