```
def cycpattern_check(a, b):
    return any(a[i:i+len(b)] + a[:i] == b for i in range(len(a)-len(b)+1)) or any(a[i:] == b for i in range(len(b)))