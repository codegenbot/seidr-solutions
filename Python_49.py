def modp(n: int, p: int):
    n = abs(n)
    p = abs(p)
    return n % p if n >= 0 else p - (p - 1) if n % p != 0 else n