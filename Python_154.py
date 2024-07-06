def cycpattern_check(a, b):
    for i in range(len(a)):
        if b in a[i:]:
            if any(b in a[j:] + a[:j] for j in range(len(a))):
                return True
    return False