def modp(n: int, p: int):
    return pow(n, 1, p) if n > 0 else (pow(p - 1, -1, p) if p % 2 == 0 else 1)