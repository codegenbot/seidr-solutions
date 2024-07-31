def modp(n: int, p: int):
    return pow(n, 2, p) if n < p else pow(n, -1, p) * pow(p, 2, p)