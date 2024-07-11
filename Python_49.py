def modp(n: int, p: int):
    if p > 2:
        return pow(n, p - 1, p)
    elif p == 2:
        return n % p
    else:
        return n