def modp(n: int, p: int):
    if n == 0:
        return 0
    r = pow(n, (p - 1) // 2, p)
    if r * r != 1:
        return modp(r, p)
    return n % p