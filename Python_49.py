def modp(n: int, p: int):
    if p == 2:
        return n % p
    inv = pow(n, (p - 1) // 2, p)
    return ((n * inv) ** 2) % p