def modp(n: int, p: int):
    if p == 2:
        return n
    return pow(n * n % p, (p - 1) // 2, p)