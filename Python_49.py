def modp(n: int, p: int):
    if p == 2 or p == 3:
        return pow(n, p - 1, p)
    elif p == 1:
        return n
    else:
        return pow((n * n) % p, (p + 1) // 2, p)