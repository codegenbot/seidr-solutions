def cycpattern_check(a, b):
    return any(x == y for x, y in zip(a[0:], b[: len(b)]))