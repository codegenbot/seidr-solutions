def cycpattern_check(a, b):
    return (a.find(b) != -1) or any((a.index(c)) % len(b) == 0 for c in b)