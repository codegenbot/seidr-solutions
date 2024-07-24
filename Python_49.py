def modp(n: int, p: int):
    return pow((p + 1) // 2, p - 2, p) * (n % p or 1) % p