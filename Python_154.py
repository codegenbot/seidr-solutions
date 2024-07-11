def cycpattern_check(a, b):
    for i in range(1, min(len(b)+1, len(a)//2+1)):
        if a[i:] + a[:i] == b:
            return True
    return False