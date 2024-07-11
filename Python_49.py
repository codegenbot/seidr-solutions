def modp(n: int, p: int):
    return pow(n, p-2, p)*n + (pow(2, p-2, p) if n > 0 else 1) % p