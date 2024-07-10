def cycpattern_check(a, b):
    return a == b or any(cyc(a) == b for _ in range(len(a)))