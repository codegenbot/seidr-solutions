def cycpattern_check(a, b):
    a = a + a
    for i in range(len(a)):
        temp = a[i:] + a[:i]
        if b in temp:
            return True
    return False