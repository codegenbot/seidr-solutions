def cycpattern_check(a, b):
    if len(b) == 0:
        return True
    return (a == b) or (
        (len(a) - 1) * len(b) <= len(a)
        and all(a[i:i+len(b)] == b for i in range(len(a)-len(b)+1))
    )