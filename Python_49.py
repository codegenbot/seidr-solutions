def modp(n: int, p: int):
    if n < 0:
        return -modp(-n, p)
    return n % p