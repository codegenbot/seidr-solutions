def cycpattern_check(a, b):
    return len(a) == len(b) and any(b == (a * 2)[i:i+len(b)] for i in range(len(a)))