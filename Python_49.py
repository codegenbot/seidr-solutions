def modp(n: int, p: int):
    if p == 1:
        return 0
    elif n % p == 0:
        return 0
    else:
        return pow(n, p - 1, p) * n % p