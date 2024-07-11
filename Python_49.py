def modp(n: int, p: int):
    return pow(n % p, 1, p) if n > 0 else pow(-n % p, (p-1)//2, p)