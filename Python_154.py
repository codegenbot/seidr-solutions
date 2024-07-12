def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    while a:
        if a[:len(b)] == b:
            if a.startswith(b) or (a + a)[:len(a)+1].find(b) != -1:
                return True
        a = a[1:]
    return False