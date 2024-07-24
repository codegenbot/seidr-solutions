def cycpattern_check(a, b):
    n = len(b)
    for j in range(n - len(a) + 1):
        if a == b[j:j+len(a)]:
            return True
    return False