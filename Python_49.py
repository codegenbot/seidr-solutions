def modp(n: int, p: int):
    return pow(n, 1, p) if n >= 0 else pow(-n, 1, p)