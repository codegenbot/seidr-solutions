def modp(n: int, p: int):
    if p == 2:
        return n % p
    else:
        return pow(n * n % p - n + p, p - 2, p)