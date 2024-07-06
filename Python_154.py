```
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for _ in range(len(a)):
        if a[_:] + a[:_] == b:
            return True
    return False