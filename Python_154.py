```
def cycpattern_check(a, b):
    for i in range(len(a)):
        if b in a[i:] + a[:i]:
            return True
    return False