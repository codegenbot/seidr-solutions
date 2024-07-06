def modp(n: int, p: int):
    if not n:
        return 1
    return pow(n, p - 2, p) * n % p if n else 1