def modp(n: int, p: int):
    if n < 1:
        return pow(n, p - 1, p)
    else:
        return n ** (p-1) % p
    return n % p