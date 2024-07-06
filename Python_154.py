```
def cycpattern_check(a, b):
    if len(b) == 0:
        return True
    if a == b:
        return True
    for i in range(len(a)):
        rotated_a = a[i:] + a[:i]
        if b in a or b in rotated_a:
            return True
    if cycpattern_check(b, a):
        return True
    return False