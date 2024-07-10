def modp(n: int, p: int):
    n = abs(n)
    p = abs(p)
    return n % p if n >= 0 else p - (n % p) if n % p != 0 else n