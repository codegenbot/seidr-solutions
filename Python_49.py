def modp(n: int, p: int):
    n = abs(n)
    p = abs(p)
    result = n % p
    return result if result >= 0 else p + result