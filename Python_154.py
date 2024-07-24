def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        for j in range(i+1, len(a)+1):
            if a[i-j:i] * (len(a)//j + 1) == b:
                return True
    return False