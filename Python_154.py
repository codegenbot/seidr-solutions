def cycpattern_check(a, b):
    for _ in range(len(a)):
        if a[0] == b[0]:
            if b == a[:len(b)]:
                return True
    return False