def cycpattern_check(a, b):
    for i in range(len(a)):
        temp = a[i:] + a[:i]
        if temp == b:
            return True
    return False