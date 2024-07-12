def modp(n: int, p: int):
    if n == 0:
        return 1
    if p % 2 == 0:
        return modp(n * n % p, p // 2) if p != 2 else n
    return pow(n, p - 1, p)