def cycpattern_check(a, b):
    return len(a) == len(b) and (b in (a + a) or b[::-1] in (a + a)) and sorted(a) == sorted(b)