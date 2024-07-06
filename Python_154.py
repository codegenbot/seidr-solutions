```
def cycpattern_check(a, b):
    if len(b) == 0:
        return True
    if a == b:
        return True
    return (a == b) or all(a[i:i+len(b)]==b for i in range(len(a)-len(b)+1)) or a[:len(b)]+a[len(b):]==b