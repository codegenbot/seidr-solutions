def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    while len(a) >= len(b):
        if a[:len(b)] == b:
            if a[len(b):] in [a[i:i+len(b)] for i in range(len(a))]:
                return True
        a = a[1:]
    return False