def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        if a.lower() == b.lower():
            return True
    return False