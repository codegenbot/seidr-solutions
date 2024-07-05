def cycpattern_check(a, b):
    b_rotations = [b[i:] + b[:i] for i in range(len(b))]
    return any(rot in a for rot in b_rotations)