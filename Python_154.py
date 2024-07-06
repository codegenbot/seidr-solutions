```
def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    a = sorted([c for c in a.lower()])
    for i in range(len(b)):
        b_rotated = [c for c in (b[i:] + b[:i]).lower()]
        if str(a) == str(sorted(b_rotated)):
            return True
    return False