def cycpattern_check(a, b):
    for _ in range(len(a)):
        a = a[1:] + a[0]
        if b.lower() in a.lower():
            return True
    return False