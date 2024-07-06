def modp(n: int, p: int):
    if p == 2:
        return n % p
    else:
        return pow(n, p - 2, p)