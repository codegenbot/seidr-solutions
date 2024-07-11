def modp(n: int, p: int):
    return pow(n % p, p - 2, p) if n >= 0 else pow(-n % p, p - 2, p)