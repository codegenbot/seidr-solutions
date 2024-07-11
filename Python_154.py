def cycpattern_check(a, b):
    return a.find(b) != -1 or any(a.find(x + b) != -1 for x in range(len(b)))