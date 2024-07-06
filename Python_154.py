```
def cycpattern_check(a, b):
    if len(b) != len(a):
        return False
    a = a + a
    for i in range(len(a)):
        if a[i:i+len(b)] == b:
            return True
    return False