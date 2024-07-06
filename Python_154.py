```
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        for j in range(len(b)):
            if a[i:] + a[:i] == b[j:] + b[:j]:
                return True
    return False