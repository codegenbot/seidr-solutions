def modp(n: int, p: int):
    if p == 0:
        return n
    elif p > 0:
        return n % p