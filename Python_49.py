def modp(n: int, p: int):
    return n if n < p else n - p * modp(n // p, p)