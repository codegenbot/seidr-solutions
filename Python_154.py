def cycpattern_check(a, b):
    return (
        len(a) == len(b)
        and b in (a + a)
        or any(b in (a[i:] + a[:i]) for i in range(len(a)))
    )