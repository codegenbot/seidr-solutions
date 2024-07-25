def modp(n: int, p: int):
    if n == 0:
        return 0
    res = pow(n, (p - 1) // 2, p)
    return res * n % p