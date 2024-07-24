def cycpattern_check(a, b):
    a = a + a
    for i in range(len(b) - min(len(a), len(b)) + 1):
        if a[i:i+len(a)] == b:
            return True
    return False