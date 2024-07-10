def cyclic_shift(s):
    return [s[i:] + s[:i] for i in range(len(s)]

def cycpattern_check(a, b):
    return len(a) == len(b) and (b in cyclic_shift(a) or a in cyclic_shift(b)