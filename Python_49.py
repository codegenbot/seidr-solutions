def modp(n: int, p: int):
    if p == 2 or p == 3:
        return pow(n, p - 1, p)
    else:
        return pow(n, p - 2, p) * n % p