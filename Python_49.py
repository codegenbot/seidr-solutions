def modp(n: int, p: int):
    if pow(4, (p - 1) // 2, p) == 3:
        return pow(n, p - 2, p) * n % p
    else:
        return pow(n, p - 1, p)