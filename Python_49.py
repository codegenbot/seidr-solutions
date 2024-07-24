def modp(n: int, p: int):
    if (p - 1) % p == 0:
        return n * pow(n, -1, p) % p
    else:
        return pow(n, (p - 2) % p, p) * n % p