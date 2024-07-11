def cycpattern_check(a, b):
    if len(a) != len(b):
        return False

    return ''.join(sorted(a)) == ''.join(sorted(b))