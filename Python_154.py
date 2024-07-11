def cycpattern_check(a, b):
    extended_a = a + a
    if len(b) > len(extended_a) // 2:
        return False
    for i in range(len(extended_a)):
        if extended_a[i:i+len(b)].lower() == b.lower():
            return True
    return False