```
def cycpattern_check(a, b):
    n = len(b)
    for i in range(len(b)):
        if a == b[i:i+len(a)]:
            return True
        if i < len(b) - len(a) and a == b[i+i+len(a):i+len(a)]:
            return True
    return False