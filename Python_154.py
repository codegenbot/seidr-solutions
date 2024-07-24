def cycpattern_check(a, b):
    for i in range(len(a)-len(b)+1):
        if a[i:i+len(b)] == b:
            if a[i:i+len(b)]*2==b:
                return True
    return False