def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    a += a  # Double the string a
    return b in a