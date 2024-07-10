def cycpattern_check(a, b):
    return len(a) == len(b) and any(a == (b + b)[i:i+len(a)] for i in range(len(b)))