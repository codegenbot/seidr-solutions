```
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        if a[i:] + a[:i] == b or a[a.index(b[0:i]):] + a[:a.index(b[0:i])] == b:
            return True
    return False