def cycpattern_check(a, b):
    if len(b) != len(a):
        return False
    for i in range(len(a)):
        for j in [-1, 0, 1]:
            temp = a[i:] + (a[:i] if j == 0 else a[i::-1])[::j]
            if temp == b:
                return True
    return False