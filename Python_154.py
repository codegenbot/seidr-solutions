```
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    while len(a) >= len(b):
        if a[:len(b)] == b:
            if a[len(b):] in [b[i:] for i in range(len(b))]:
                return True
        a = a[1:]
    return False