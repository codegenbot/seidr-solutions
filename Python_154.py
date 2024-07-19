def cycpattern_check(a, b):
    return len(a) == len(b) and b in a + a[::-1]  # Add [::-1] to check for reversed sequence as well