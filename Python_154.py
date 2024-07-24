def cycpattern_check(a , b):
    return a.__contains__(b+b) or any(a.__contains__(rot+b) for rot in (b[i:]+b[:i] for i in range(len(b))))