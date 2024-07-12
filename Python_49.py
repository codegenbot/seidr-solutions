def modp(n: int, p: int):
    if n % p == 0:
        return 1
    else:
        return pow(n, p - 2, p) * (n % p)