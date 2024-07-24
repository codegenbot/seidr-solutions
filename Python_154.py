def cycpattern_check(a, b):
    a_len = len(a)
    b_len = len(b)

    if a_len % b_len != 0:
        return False

    for i in range(0, a_len, b_len):
        if a[i : i + b_len] != b:
            return False

    return True