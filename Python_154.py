```
def cycpattern_check(a, b):
    n = len(b)
    for i in range(n - len(a) + 1):
        if a == b[i:i+len(a)]:
            return True
    return False