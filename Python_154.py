def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        if a[i:] + a[:i] == b:
            return True
    for j in range(1, len(a)//2+1):
        if (a[j:] + a[:j]) == b:
            return True
    return False