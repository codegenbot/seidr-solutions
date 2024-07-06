```
def cycpattern_check(a, b):
    if len(a) != len(b) * (len(b) + 1):
        return False
    for i in range(len(b)):
        if a[i:] != b:
            return False
        a = a[len(b):]
    return True