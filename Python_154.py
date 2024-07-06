```
def cycpattern_check(a, b):
    a = a.lower()
    b = b.lower()
    if len(a) != len(b):
        return False
    for i in range(len(a)):
        if a[i:] + a[:i] == b:
            return True
    return False