```
def cycpattern_check(a, b):
    for i in range(len(a)-len(b)+1):
        if a[i:i+len(b)] == b:
            if a[i+len(b):]+a[i:i+len(b)]==b:
                return True
    return False