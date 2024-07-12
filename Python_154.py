def cycpattern_check(a, b):
    return len(a) == len(b) and any(b in (a + a)[i:i + len(a)] for i in range(len(a))