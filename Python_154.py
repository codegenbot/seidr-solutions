def cycpattern_check(a, b):
    return b in a or any(b in rota for rota in (a[i:] + a[:i] for i in range(len(a))))