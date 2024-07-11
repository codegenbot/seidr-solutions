def modp(n: int, p: int):
    if p <= 2:
        return 1
    elif p > 2:
        return pow(n, p - 1, p)