def cycpattern_check(a, b):
    return (a + a).startswith(b) or (b + b).startswith(a)