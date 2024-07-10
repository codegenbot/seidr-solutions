def cycpattern_check(a, b):
    if len(a) != len(b):
        return False
    rotation_index = (a + a).index(b)
    return a == (a + a)[rotation_index : rotation_index + len(a)]