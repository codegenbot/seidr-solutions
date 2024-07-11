def cycpattern_check(a, b):
    for i in range(len(b)):
        if a[i:] + a[:i] == b[::-1]:  
            return True
    return False