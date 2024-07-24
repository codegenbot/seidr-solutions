def cycpattern_check(a, b):
    b = b.lower().replace(" ", "")
    for i in range(len(b), len(a)+1):
        if a[i-len(b):i].lower().replace(" ", "") == b:
            return True
    return False