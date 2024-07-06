def modp(n: int, p: int):
    if n < p:
        return n % p
    else:
        return n - p * modp(n // p, p)