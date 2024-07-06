```
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        rotated = a[i:] + a[:i]
        if rotated == b or rotated == b[1:]+b[0]:
            return True
    return False