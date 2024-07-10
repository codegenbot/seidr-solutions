def cycpattern_check(a, b):
    for i in range(len(a)-len(b)+1):
        if a[i:i+len(b)] + a[:i] == b or a[i:] == b:
            return True
    return False