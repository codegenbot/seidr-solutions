def cycpattern_check(a, b):
    a_rotations = (a[i:] + a[:i] for i in range(len(a)))
    return any(rotate == b for rotate in a_rotations)