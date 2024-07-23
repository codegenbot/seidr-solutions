def modp(n: int, p: int):
    if n == 0:
        return 0
    elif n % p == 0:
        return 0
    else:
        return pow(n, (p - 1), p)