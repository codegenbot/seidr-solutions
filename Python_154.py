```
def cycpattern_check(a, b):
    if b in a:
        return True
    for i in range(len(b)):
        rotated = b[i:] + b[:i]
        if rotated in a:
            return True
    return False