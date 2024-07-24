def cycpattern_check(a, b):
    return a.endswith(b) or any(
        a[i : i + len(b)] == b for i in range(len(a) - len(b) + 1)
    )