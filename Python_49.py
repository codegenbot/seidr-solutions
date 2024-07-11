def modp(n: int, p: int):
    return n * pow(n, p - 4, p) % p if p == 2 else pow(n, p - 2, p) * n % p if n and p > 2 else 1