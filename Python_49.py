def modp(n: int, p: int):
    return pow(n, 1, p) if n > 0 else 1 if p == 1 else pow(p, -1, p)