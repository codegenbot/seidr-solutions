def cycpattern_check(a, b):
    min_len = min(len(a), len(b))
    for i in range(min_len):
        if a[i:] == b[:i]:
            return True
    return False