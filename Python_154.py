def cycpattern_check(a, b):
    return a in a + a or a[: -len(b)] in (a[len(a) - len(b) :] + a[: len(a) - len(b)])