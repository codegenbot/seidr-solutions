```
def cycpattern_check(a, b):
    for i in range(len(b) - len(a) + 1):
        if a == b[i:i+len(a)]:
            return True
    return False