```
def cycpattern_check(a, b):
    if len(b) != len(a):
        return False
    else:
        a = list(a)
        for _ in range(len(a)):
            b = list(b)
            for i in range(len(a)):
                a[:] = a[i:] + (a[:i] if _ == 0 else a[i::-1])
                if ''.join(a) == ''.join(b):
                    return True
            b[:] = [c for r in zip(*[iter(b)]*len(b))][0]
    return False