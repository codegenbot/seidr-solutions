def cycpattern_check(a, b):
    while len(b) > len(a):
        a += a
    return (a + a).lower()[:len(a)].find(b.lower()) != -1