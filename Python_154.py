def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    a = sorted([c for c in a.lower()])
    b = [c for c in b.lower()]
    for i in range(len(b)):
        if str(a) == str(sorted(b[i:] + b[:i])):
            return True
    return False