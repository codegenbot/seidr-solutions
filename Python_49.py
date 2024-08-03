def modp(n: int, p: int):
    return pow(n, (p - 1) // 2) * n % p