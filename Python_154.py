def cycpattern_check(a, b):
    min_len = min(len(a), len(b))
    for i in range(min_len):
        a_rotated = a[i:] + a[:i]
        if a_rotated == b:
            return True
    return False