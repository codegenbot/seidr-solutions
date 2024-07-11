def modp(n: int, p: int):
    if p <= 2:
        return 1
    elif p > 2:
        res = pow(n, p - 1, p)
        return 1 if (res * n) % p == 1 else 0