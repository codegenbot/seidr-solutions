def cycpattern_check(a, b):
    for i in range(len(a)):
        for j in range(i + 1):
            temp = a[j:] + a[:j]
            if b in temp:
                return True
    return False