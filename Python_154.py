def cycpattern_check(a, b):
    if len(b) == 0:
        return True
    if a == b:
        return True
    for i in range(len(a)):
        rotated_a = a[i:] + a[:i]
        if b in a or b in rotated_a:
            return True
    if len(b) > len(a):
        for i in range(len(b)):
            rotated_b = b[i:] + b[:i]
            if rotated_b in a or a in rotated_b:
                return True
    return False