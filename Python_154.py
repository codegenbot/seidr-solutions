def cycpattern_check(a, b):
    return a.find(b) != -1 or any(
        a.find(x) != -1 for x in (b + y for y in range(len(b)))
    )