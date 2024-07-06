```
def cycpattern_check(a, b):
    if len(b) > len(a):
        for i in range(len(b)-len(a)+1):
            if b[i:i+len(a)] == a:
                return True
    else:
        for i in range(len(a)-len(b)+1):
            if a[i:i+len(b)] == b:
                return True
    return False