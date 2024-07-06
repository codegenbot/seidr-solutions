def cycpattern_check(a, b):
    return (a == b) or (
        (len(a) - 1) * len(b) <= len(a)
        and any(b in a[i : i + len(b)] for i in range(len(a)))
    )