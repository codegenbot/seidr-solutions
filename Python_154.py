def cycpattern_check(a, b):
    return len(a) == len(b) and sorted(b) in (sorted(a + a)) and sorted(a) in (sorted(b + b)) and set(a) == set(b)