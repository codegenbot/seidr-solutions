def modp(n: int, p: int):
    if p == 2:
        return n
    return pow(n, (p - 1) // 2, p) * n % p