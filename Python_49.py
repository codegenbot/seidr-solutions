def modp(n: int, p: int):
    if n == 0:
        return 0
    res = pow(n, (p-1)//2, p)
    if n % 2:
        return res * n % p
    return res ** 2 % p