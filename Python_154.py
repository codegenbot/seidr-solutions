def cycpattern_check(a, b):
    for _ in range(len(a)):
        if a.index(b) == 0 or a.rindex(b) == len(a) - 1:
            return True
    return False