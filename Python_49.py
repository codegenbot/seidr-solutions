def modp(n: int, p: int):
    if n == 0:
        return 0
    r = pow(n, p-1, p)
    return n * r % p