def cycpattern_check(a, b):
    for i in range(len(a)):
        temp = a[i:] + a[:i]
        if sorted(temp) == sorted(b):
            return True
    return False