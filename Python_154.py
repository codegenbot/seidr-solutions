def cycpattern_check(a, b):
    str_a = str(a)
    str_b = str(b)
    if len(str_a) % len(str_b) != 0:
        return False
    check_str = str_b * (len(str_a) // len(str_b)) + str_b[:len(str_a) % len(str_b)]
    return check_str == str_a