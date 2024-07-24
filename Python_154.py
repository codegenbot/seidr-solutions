```
def cycpattern_check(a, b):
    if len(a) > len(b):
        a, b = b, a
    for i in range(len(b) - len(a) + 1):
        if a == b[i:i+len(a)]:
            return True
    return False