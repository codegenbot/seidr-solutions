```
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    if a[:len(b)] != b:
        return False
    for i in range(len(b), len(a)):
        if a[i:i+len(b)] != b:
            return False
    return True