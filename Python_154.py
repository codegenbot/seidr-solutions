def cycpattern_check(a, b):
    a_len = len(a)
    for i in range(a_len):
        for j in range(i + 1, a_len + 1):
            if a[i : i + j] == b:
                return True
    return False