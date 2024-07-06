def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    a = sorted([c for c in a.lower()])
    b = sorted([c for c in b.lower()])
    return str(a) == str(b)