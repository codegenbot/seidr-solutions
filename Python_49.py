def modp(n: int, p: int):
    return n % p if n > 0 else (n < 0).__abs__() % p