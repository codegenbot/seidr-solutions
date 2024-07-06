def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    else:
        for i in range(len(a)):
            if a[i:i+len(b)] == b and a[:i] + a[i+i:] == a:
                return True
    return False