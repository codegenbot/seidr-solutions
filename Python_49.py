def modp(n: int, p: int):
    if p % 4 == 0:
        return pow(n * n % p, (p - 1) // 4, p)
    else:
        return pow(n, p - 2, p) * n % p