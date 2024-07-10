def modp(n: int, p: int):
    if p == 2 or p == 3:
        return pow(n, p - 1, p)
    else:
        return (pow(n, p - 1, p) * n) % p if p % 2 else pow(n, p, p)