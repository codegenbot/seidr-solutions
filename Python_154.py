def cycpattern_check(a, b):
    for i in range(len(b), len(a)+1):
        if a[i-len(b):i] == b:
            return True
    return False