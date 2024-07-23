def modp(n: int, p: int):
    if pow(n, p // 2, p) != pow(pow(n, p // 4, p), 2, p):
        return pow(n, p - 1, p)
    return pow(n, p - 2, p) * n % p